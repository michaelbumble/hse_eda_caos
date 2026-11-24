#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    size_t size;
    size_t capacity;
} Vector;

static int reserve(Vector *vector, size_t new_capacity) {
    int *tmp = realloc(vector->data, new_capacity * sizeof(*vector->data));
    if (tmp == NULL) {
        return 0;
    }

    vector->data = tmp;
    vector->capacity = new_capacity;
    return 1;
}

static int push_back(Vector *vector, int value) {
    if (vector->size == vector->capacity) {
        size_t new_capacity = vector->capacity == 0 ? 2 : 2 * vector->capacity;
        if (!reserve(vector, new_capacity)) {
            return 0;
        }
    }

    vector->data[vector->size] = value;
    ++vector->size;
    return 1;
}

int main(void) {
    Vector vector = {NULL, 0, 0};
    int value;

    while (scanf("%d", &value) == 1) {
        if (!push_back(&vector, value)) {
            perror("realloc");
            free(vector.data);
            return 1;
        }

        printf("size=%zu, capacity=%zu\n", vector.size, vector.capacity);
    }

    printf("Numbers in input order:\n");
    for (size_t i = 0; i < vector.size; ++i) {
        printf("%d\n", vector.data[i]);
    }

    free(vector.data);
    return ferror(stdin) ? 1 : 0;
}
