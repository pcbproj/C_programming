#include <stdio.h>
#include <string.h>

int main()
{
    char myString[] = "My Name is Alexander";
    char temp[50];
    strncpy(temp, myString, sizeof(temp) - 1);
    temp[sizeof(temp) - 1] = '\0';  // Гарантируем завершающий ноль
    printf("The string is: %s", temp);

    return 0;
}
