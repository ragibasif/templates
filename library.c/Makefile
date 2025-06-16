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

BUILD_DIRECTORY := build

EXECUTABLE := $(BUILD_DIRECTORY)/program

SRCS := $(wildcard *.c) $(wildcard */*.c)
HDRS := $(wildcard *.h) $(wildcard */*.h)
OBJS := $(patsubst %.c, $(BUILD_DIRECTORY)/%.o, $(SRCS))


.PHONY: all clean help run install test check debug

all: $(EXECUTABLE)

check:
	@which $(CC) > /dev/null && echo "$(SUCCESS)✅ SUCCESS:$(RESET) $(CC) is installed" || echo "$(ERROR)❌ ERROR:$(RESET) $(CC) not found, please install $(CC)"
	@which $(DBG) > /dev/null && echo "$(SUCCESS)✅ SUCCESS:$(RESET) $(DBG) is installed" || echo "$(ERROR)❌ ERROR:$(RESET) $(DBG) not found, please install $(DBG)"

$(EXECUTABLE): $(OBJS)
	@echo "🔧 Linking $(INFO)$@$(RESET) ..."
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS) && \
		echo "$(SUCCESS)✅ Build successful:$(RESET) $@" || \
		(echo "$(ERROR)❌ Linking failed:$(RESET) $@" && exit 1)

$(BUILD_DIRECTORY)/%.o: %.c
	@echo "🔧 Compiling $(INFO)$<$(RESET) ..."
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@ && \
		echo "$(SUCCESS)✅ Compiled:$(RESET) $<" || \
		(echo "$(ERROR)❌ Compile failed:$(RESET) $<" && exit 1)


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


help:
	@echo "$(INFO)make help$(RESET)"
	@echo "Makefile for Building $(MAGENTA)$(EXECUTABLE)$(RESET)."
	@echo "Usage:"
	@echo "  $(MAGENTA)make$(RESET)             — build"
	@echo "  $(MAGENTA)make all$(RESET)         — build"
	@echo "  $(MAGENTA)make check$(RESET)       — dependency check"
	@echo "  $(MAGENTA)make clean$(RESET)       — remove build files"
	@echo "  $(MAGENTA)make run$(RESET)         — run program"

