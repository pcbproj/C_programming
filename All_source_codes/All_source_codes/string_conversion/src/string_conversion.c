#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TEXT_SIZE  100
#define SUBSTRING_SIZE  40

int main(void)
{
	char text[TEXT_SIZE];    // Input buffer for string to be searched
	char substring[SUBSTRING_SIZE];    // Input buffer for string sought

	printf("Enter the string to be searched (less than %d characters):\n", TEXT_SIZE);
	fflush(stdout);
	fgets(text, sizeof(text), stdin);

	printf("\nEnter the string sought (less than %d characters):\n", SUBSTRING_SIZE);
	fflush(stdout);
	fgets(substring, sizeof(substring), stdin);

	printf("\nFirst string entered:\n%s\n", text);
	printf("Second string entered:\n%s\n", substring);

	// Remove \n before processing
	text[strcspn(text, "\n")] = '\0';
	substring[strcspn(substring, "\n")] = '\0';

	// Convert both strings to uppercase.
	for(int i = 0; (text[i] = (char)toupper(text[i])) != '\0'; i++);
	for(int i = 0; (substring[i] = (char)toupper(substring[i])) != '\0'; i++);

	printf("The second string %s found in the first.\n", (strstr(text, substring) == NULL) ? "was not" : "was");

	return 0;
}
