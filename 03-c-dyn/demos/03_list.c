#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

static int push_front(Node **head, int value) {
    Node *node = calloc(1, sizeof(*node));
    if (node == NULL) {
        return 0;
    }

    node->value = value;
    node->next = *head;
    *head = node;
    return 1;
}

static void print_list(const Node *head) {
    for (const Node *node = head; node != NULL; node = node->next) {
        printf("%d\n", node->value);
    }
}

static void clear(Node *head) {
    while (head != NULL) {
        Node *next = head->next;
        free(head);
        head = next;
    }
}

int main(void) {
    Node *head = NULL;
    const int values[] = {10, 20, 30};

    for (size_t i = 0; i < sizeof(values) / sizeof(values[0]); ++i) {
        if (!push_front(&head, values[i])) {
            perror("calloc");
            clear(head);
            return 1;
        }
    }

    print_list(head);
    clear(head);
    return 0;
}
