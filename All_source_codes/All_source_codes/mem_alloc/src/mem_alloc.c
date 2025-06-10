#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = NULL;

    /* Initial memory allocation */
    str = (char *)malloc(15 * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    strcpy(str, "1234567890abcd");
    printf("String = %s, Address = %p\n", str, str);

    /* Reallocating memory */
    char *temp = (char *)realloc(str, 25 * sizeof(char));
    if (temp == NULL) {
        printf("Memory reallocation failed\n");
        free(str);  // Free the original memory
        return 1;
    }
    str = temp;

    strcat(str, ".com");
    printf("String = %s, Address = %p\n", str, str);

    free(str);
    str = NULL;  // It is good practice to zero the pointer after freeing it

    return 0;
}
