CC := gcc

CFLAGS := -std=c99 -Wall -Wextra -O0 -g3 -pedantic
LDFLAGS := -v -lc

EXECUTABLE := DEFAULT

SRCS := $(wildcard *.c)
HDRS := $(wildcard *.h)
OBJS := $(patsubst %.c, %.o, $(SRCS))

.PHONY: all clean help run

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	@echo "$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)"
	@$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

%.o: %.c
	@echo "$(CC) $(CFLAGS) -c $< -o $@"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(RM) -r $(EXECUTABLE) $(OBJS) *~ *.bak *.dSYM *.out .*.un~"
	@$(RM) -r $(EXECUTABLE) $(OBJS) *~ *.bak *.dSYM *.out .*.un~

run: $(EXECUTABLE)
	@make clean
	@make all
	@./$(EXECUTABLE)

help:
	@echo "make help"
	@echo "Makefile for Building ${EXECUTABLE}."
	@echo "Usage:"
	@echo "  make all         — build"
	@echo "  make clean       — remove built files"
	@echo "  make run         — run program using "

