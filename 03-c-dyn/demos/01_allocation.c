#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int number;
    char letter;
} Item;

static void print_item(const Item *item) {
    printf("number=%d, letter=%c\n", item->number, item->letter);
}

int main(void) {
    // Item *first = malloc(sizeof(Item));
    Item *first = malloc(sizeof(*first));
    if (first == NULL) {
        perror("malloc");
        return 1;
    }

    first->number = 42;
    first->letter = 'A';
    print_item(first);

    Item *second = calloc(1, sizeof(*second));
    if (second == NULL) {
        perror("calloc");
        free(first);
        return 1;
    }

    printf("calloc initializes bytes to zero:\n");
    printf("number=%d, letter code=%d\n", second->number, second->letter);

    second->number = 7;
    second->letter = 'B';
    print_item(second);

    free(second);
    free(first);
    return 0;
}
