# Makefile

RESET=\033[0m
BOLD=\033[1m
GREEN=\033[0;92m
RED=\033[0;91m
MAGENTA=\033[0;95m
CYAN=\033[0;96m

ERROR=$(BOLD)$(RED)
SUCCESS=$(BOLD)$(GREEN)
INFO=$(BOLD)$(CYAN)

CC := gcc

CFLAGS := -std=c99 -Wall -Wextra -Weverything -Wvla -O1 -g3 -pedantic -v -fsanitize=address -fno-omit-frame-pointer -fno-optimize-sibling-calls

DBG = gdb

LDFLAGS := -v -lc

INSTALL_DIRECTORY := bin
SOURCE_DIRECTORY := src
INCLUDE_DIRECTORY := include
BUILD_DIRECTORY := build
TEST_DIRECTORY := tests

EXECUTABLE := $(BUILD_DIRECTORY)/program

SRCS := $(wildcard $(SOURCE_DIRECTORY)/*.c) $(wildcard $(SOURCE_DIRECTORY)/*/*.c)

HDRS := $(wildcard $(INCLUDE_DIRECTORY)/*.h) $(wildcard $(INCLUDE_DIRECTORY)/*/*.h)

OBJS := $(patsubst $(SOURCE_DIRECTORY)/%.c, $(BUILD_DIRECTORY)/%.o, $(SRCS))

TEST_SRCS := $(wildcard $(TEST_DIRECTORY)/*.c)
TEST_BINS := $(patsubst $(TEST_DIRECTORY)/%.c, $(BUILD_DIRECTORY)/%, $(TEST_SRCS))

.PHONY: all clean help run install test check debug

all: $(EXECUTABLE)

check:
	@which $(CC) > /dev/null && echo "$(SUCCESS)✅ SUCCESS:$(RESET) $(CC) is installed" || echo "$(ERROR)❌ ERROR:$(RESET) $(CC) not found, please install $(CC)"
	@which $(DBG) > /dev/null && echo "$(SUCCESS)✅ SUCCESS:$(RESET) $(DBG) is installed" || echo "$(ERROR)❌ ERROR:$(RESET) $(DBG) not found, please install $(DBG)"

$(EXECUTABLE): $(OBJS)
	@echo "🔧 Linking $(INFO)$@$(RESET) ..."
	@mkdir -p $(@D) # create specific target directory needed for each file
	@$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS) && \
		echo "$(SUCCESS)✅ Build successful:$(RESET) $@" || \
		(echo "$(ERROR)❌ Linking failed:$(RESET) $@" && exit 1)

$(BUILD_DIRECTORY)/%.o: $(SOURCE_DIRECTORY)/%.c
	@echo "🔧 Compiling $(INFO)$<$(RESET) ..."
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -I$(INCLUDE_DIRECTORY) -c $< -o $@ && \
		echo "$(SUCCESS)✅ Compiled:$(RESET) $<" || \
		(echo "$(ERROR)❌ Compile failed:$(RESET) $<" && exit 1)

test: $(TEST_BINS)
	@echo "$(INFO)make test$(RESET)"

$(BUILD_DIRECTORY)/%: $(TEST_DIRECTORY)/%.c $(wildcard $(INCLUDE_DIRECTORY)/*.h)
	@echo "🧪 Compiling test $(INFO)$<$(RESET) ..."
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS) && \
		echo "$(SUCCESS)✅ Test build successful:$(RESET) $@" || \
		(echo "$(ERROR)❌ Test build failed:$(RESET) $<" && exit 1)


debug: $(EXECUTABLE)
	@$(DBG) ./$(EXECUTABLE)

clean:
	@echo "$(INFO)make clean$(RESET) $(RM) -r $(EXECUTABLE) $(OBJS) $(INSTALL_DIRECTORY) $(BUILD_DIRECTORY) *~ *.bak *.dSYM *.out .install"
	@$(RM) -r $(EXECUTABLE) $(OBJS) $(INSTALL_DIRECTORY) $(BUILD_DIRECTORY) *~ *.bak *.dSYM *.out .install .*.un~


run: $(EXECUTABLE)
	@echo "$(INFO)make run$(RESET)"
	@make clean
	@make all
	@./$(EXECUTABLE)
	@make clean

install: $(EXECUTABLE)
	@ if [ ! -d $(INSTALL_DIRECTORY) ] ; then mkdir -p $(INSTALL_DIRECTORY) ; fi
	@cp $(EXECUTABLE) $(INSTALL_DIRECTORY)
	@touch .install && echo $(shell date) >> .install

help:
	@echo "$(INFO)make help$(RESET)"
	@echo "Makefile for Building $(MAGENTA)$(EXECUTABLE)$(RESET)."
	@echo "Usage:"
	@echo "  $(MAGENTA)make$(RESET)             — build"
	@echo "  $(MAGENTA)make all$(RESET)         — build"
	@echo "  $(MAGENTA)make check$(RESET)       — dependency check"
	@echo "  $(MAGENTA)make clean$(RESET)       — remove build files"
	@echo "  $(MAGENTA)make run$(RESET)         — run program"
	@echo "  $(MAGENTA)make test$(RESET)        — build tests"
	@echo "  $(MAGENTA)make install$(RESET)     — install binary to $(INSTALL_DIRECTORY)"

