#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *values = malloc(3 * sizeof(*values));
    if (values == NULL) {
        return 1;
    }

    for (size_t i = 0; i < 3; ++i) {
        values[i] = (int)i;
    }

    // Deliberate heap-buffer-overflow for the ASan demo.
    values[3] = 42;  
    printf("%d\n", values[3]);

    free(values);
    return 0;
}
