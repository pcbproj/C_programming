#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello how are you-my name is-Alexander";
    const char s[] = "-";  // Разделитель: дефис
    char *token;

    /* Получение первого токена */
    token = strtok(str, s);

    /* Перебор остальных токенов */
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }

    return 0;
}
