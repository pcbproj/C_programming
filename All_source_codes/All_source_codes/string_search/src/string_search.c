#include <stdio.h>
#include <string.h>

int main(void)
{
//	char str[] = "The quick brown fox"; // Строка для поиска
//	char ch = 'q'; // Искомый символ
//	char *pFound = NULL; // Указатель, инициализированный NULL
//	pFound = strchr(str, ch); // Сохраняет адрес, где найден символ
//	printf("%s", pFound); // Отображаем результат




	char text[] = "Every dog has his day";
	char word[] = "Dog";
	char *pFound = NULL;
	pFound = strstr(text, word);
	if (pFound != NULL) printf("%s", pFound); // Display result
	else printf("String not found\n");

	return 0;
}
