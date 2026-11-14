#include <limits.h>
#include <stdio.h>

int main() {
    unsigned x = 0;
    unsigned y = x - 1;

    printf("UINT_MAX: %u\n", UINT_MAX);
    printf("0u - 1: %u\n", y);
    printf("UINT_MAX + 1: %u\n", UINT_MAX + 1u);
    return 0;
}
