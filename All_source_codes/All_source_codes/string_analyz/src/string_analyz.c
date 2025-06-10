#include <stdio.h>
#include <ctype.h>  // Для функций isalpha(), isdigit(), ispunct()

#define BUFFER_SIZE		100

int main()
{
    char buf[BUFFER_SIZE];         // Буфер для ввода строки
    int nLetters = 0;      // Количество букв
    int nDigits = 0;       // Количество цифр
    int nPunct = 0;        // Количество знаков пунктуации

    printf("Enter an interesting string of less than %d characters:\n", BUFFER_SIZE);
    fflush(stdout);
    fgets(buf, sizeof(buf), stdin);      // Считываем строку в буфер

    int i = 0;             // Индекс для перебора символов
    while (buf[i]) {       // Пока не достигнут конец строки ('\0')
        if (isalpha(buf[i]))
            ++nLetters;     // Увеличиваем счётчик букв
        else if (isdigit(buf[i]))
            ++nDigits;      // Увеличиваем счётчик цифр
        else if (ispunct(buf[i]))
            ++nPunct;       // Увеличиваем счётчик знаков пунктуации
        ++i;               // Переходим к следующему символу
    }
    printf("\nYour string contained %d letters, %d digits and %d punctuation characters.\n",
           nLetters, nDigits, nPunct);

    return 0;
}
