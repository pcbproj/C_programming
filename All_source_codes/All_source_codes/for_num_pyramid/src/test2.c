#include <stdio.h>

int main()
{
    // Создаем массив чисел
    int values[] = {1, 2, -1, 3, -1, -99, 7, 8, 10};
    int size = sizeof(values) / sizeof(values[0]); // Вычисляем размер массива

    // Проходим по всем элементам массива
    for (int i = 0; i < size; i++) {
        int val = values[i]; // Текущее значение

        if (val == -99)
        {
            break; // Полностью выходим из цикла при встрече -99
        }
        else if (val == -1)
        {
            continue; // Пропускаем итерацию при встрече -1
        }
        else
        {
            printf("%d\n", val); // Выводим значение
        }
    }

    return 0;
}
