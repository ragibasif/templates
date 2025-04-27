# Makefile                                                                     #

GREEN=\033[0;92m
RED=\033[0;91m
MAGENTA=\033[0;95m
RESET=\033[0m

CC := gcc
CFLAGS := -std=c99 -Iinclude -Wall -Wextra -Weverything -O0 -g3 -pedantic -DDEBUG -v

LDFLAGS := -v -lc
LIBS =

INSTALL_DIRECTORY := bin
SOURCE_DIRECTORY := src
INCLUDE_DIRECTORY := include
BUILD_DIRECTORY := build
TEST_DIRECTORY := tests

EXECUTABLE := $(BUILD_DIRECTORY)/DEFAULT

SRCS := $(wildcard $(SOURCE_DIRECTORY)/*.c)
HDRS := $(wildcard $(INCLUDE_DIRECTORY)/*.h)
OBJS := $(patsubst $(SOURCE_DIRECTORY)/%.c, $(BUILD_DIRECTORY)/%.o, $(SRCS))

TEST_SRCS := $(wildcard $(TEST_DIRECTORY)/*.c)
TEST_BINS := $(patsubst $(TEST_DIRECTORY)/%.c, $(BUILD_DIRECTORY)/t_%, $(TEST_SRCS))

.PHONY: all clean help run install test

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	@echo "🔧 Linking ${MAGENTA}$@${RESET} ..."
	@mkdir -p $(BUILD_DIRECTORY)
	@$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS) && \
		echo "$(GREEN)✅ Build successful: $@$(RESET)" || \
		(echo "$(RED)❌ Linking failed: $@$(RESET)" && exit 1)

$(BUILD_DIRECTORY)/%.o: $(SOURCE_DIRECTORY)/%.c
	@echo "🔧 Compiling ${MAGENTA}$<${RESET} ..."
	@mkdir -p $(BUILD_DIRECTORY)
	@$(CC) $(CFLAGS) -c $< -o $@ && \
		echo "$(GREEN)✅ Compiled: $<$(RESET)" || \
		(echo "$(RED)❌ Compile failed: $<$(RESET)" && exit 1)

test: $(TEST_BINS)

$(BUILD_DIRECTORY)/test_%: $(TEST_DIRECTORY)/%.c $(wildcard $(INCLUDE_DIRECTORY)/*.h)
	@echo "🧪 Compiling test ${MAGENTA}$<${RESET} ..."
	@mkdir -p $(BUILD_DIRECTORY)
	@$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS) && \
		echo "$(GREEN)✅ Test build successful: $@$(RESET)" || \
		(echo "$(RED)❌ Test build failed: $<$(RESET)" && exit 1)

clean:
	@echo "${MAGENTA}make clean${RESET} $(RM) -r $(EXECUTABLE) $(OBJS) $(INSTALL_DIRECTORY) $(BUILD_DIRECTORY) *~ *.bak *.dSYM *.out .install"
	@$(RM) -r $(EXECUTABLE) $(OBJS) $(INSTALL_DIRECTORY) $(BUILD_DIRECTORY) *~ *.bak *.dSYM *.out .install .*.un~


run: $(EXECUTABLE)
	@make clean
	@make all
	@./$(EXECUTABLE)

install: $(EXECUTABLE)
	@ if [ ! -d $(INSTALL_DIRECTORY) ] ; then mkdir -p $(INSTALL_DIRECTORY) ; fi
	@cp $(EXECUTABLE) $(INSTALL_DIRECTORY)
	@touch .install && echo $(shell date) >> .install

help:
	@echo "${MAGENTA}make help${RESET}"
	@echo "Makefile for Building ${MAGENTA}${EXECUTABLE}${RESET}."
	@echo "Usage:"
	@echo "  ${MAGENTA}make${RESET}             — build"
	@echo "  ${MAGENTA}make clean${RESET}       — remove build files"
	@echo "  ${MAGENTA}make run${RESET}         — run program"
	@echo "  ${MAGENTA}make install${RESET}     — install binary to $(INSTALL_DIRECTORY)"

