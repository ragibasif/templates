# Makefile

GREEN=\033[0;92m
RED=\033[0;91m
MAGENTA=\033[0;95m
RESET=\033[0m

CC := clang
DBG := lldb
CFLAGS := -std=c99 -Wall -Wextra -Weverything -O0 -g3 -pedantic -DDEBUG -v
LDFLAGS := -v -lc

EXECUTABLE := DEFAULT

SRCS := $(wildcard *.c)
HDRS := $(wildcard *.h)
OBJS := $(patsubst %.c, %.o, $(SRCS))

.PHONY: all clean help run check

all: $(EXECUTABLE)


check:
	@which $(CC) > /dev/null && echo "$(GREEN)✅ SUCCESS: $(CC) is installed$(RESET)" || echo "$(RED)❌ ERROR: $(CC) not found, please install clang$(RESET)"
	@which $(DBG) > /dev/null && echo "$(GREEN)✅ SUCCESS: $(DBG) is installed$(RESET)" || echo "$(RED)❌ ERROR: $(DBG) not found, please install lldb$(RESET)"

$(EXECUTABLE): $(OBJS)
	@echo "🔧 Linking ${MAGENTA}$@${RESET} ..."
	@$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS) && \
		echo "$(GREEN)✅ Build successful: $@$(RESET)" || \
		(echo "$(RED)❌ Linking failed: $@$(RESET)" && exit 1)

%.o: %.c
	@echo "🔧 Compiling ${MAGENTA}$<${RESET} ..."
	@$(CC) $(CFLAGS) -c $< -o $@ && \
		echo "$(GREEN)✅ Compiled: $<$(RESET)" || \
		(echo "$(RED)❌ Compile failed: $<$(RESET)" && exit 1)

clean:
	@echo "${MAGENTA}make clean${RESET} $(RM) -r $(EXECUTABLE) $(OBJS) *~ *.bak *.dSYM *.out"
	@$(RM) -r $(EXECUTABLE) $(OBJS) *~ *.bak *.dSYM *.out .*.un~

run: $(EXECUTABLE)
	@echo "${MAGENTA}make run${RESET}"
	@make clean
	@make all
	@./$(EXECUTABLE)

TEST_DIRECTORY := tests
TEST_SRCS := $(wildcard $(TEST_DIRECTORY)/*.c)
TEST_BINS := $(patsubst $(TEST_DIRECTORY)/%.c, $(TEST_DIRECTORY)/%, $(TEST_SRCS))

test: $(TEST_BINS)


help:
	@echo "${MAGENTA}make help${RESET}"
	@echo "Makefile for Building ${MAGENTA}${EXECUTABLE}${RESET}."
	@echo "Usage:"
	@echo "  ${MAGENTA}make${RESET}             — debug build"
	@echo "  ${MAGENTA}make clean${RESET}       — remove build files"
	@echo "  ${MAGENTA}make test${RESET}        — build test files"
	@echo "  ${MAGENTA}make run${RESET}         — build and run program"

