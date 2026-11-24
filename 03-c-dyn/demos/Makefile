CC ?= cc
CFLAGS ?= -std=c11 -Wall -Wextra -Wpedantic -O0 -g

PROGRAMS := 01_allocation 02_vector 03_list

.PHONY: all asan clean

all: $(PROGRAMS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

asan: 04_asan_bug.c
	$(CC) $(CFLAGS) -fsanitize=address -fno-omit-frame-pointer $< -o 04_asan_bug

clean:
	rm -f $(PROGRAMS) 04_asan_bug
	rm -rf $(addsuffix .dSYM,$(PROGRAMS)) 04_asan_bug.dSYM
