// Демонстрация неограниченного scanf("%s").
// Структура нужна, чтобы массивы input и password в памяти шли подряд.

// Соберите без оптимизаций: gcc 08_password_overflow.c -O0 -o 08_password_overflow
// Взлом: printf 'aaaaaaaa\0aaaaaaaa\0' | ./08_password_overflow

#include <stdio.h>
#include <string.h>

typedef struct {
    char input[9];
    char password[9];
} Auth;

int main() {
    Auth auth = {{0}, "password"};

    if (scanf("%s", auth.input) != 1) {
        return 1;
    }

    if (strcmp(auth.input, auth.password) == 0) {
        printf("Access granted\n");
    } else {
        printf("Access denied\n");
    }

    return 0;
}
