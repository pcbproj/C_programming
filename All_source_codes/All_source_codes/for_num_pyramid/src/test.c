#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("data.txt", "r");
    char *buffer = NULL;

    if (file == NULL)
    {
        perror("Error opening file");
        goto error;
    }

    buffer = (char *)malloc(100);
    if (buffer == NULL)
    {
        perror("Error allocating memory");
        goto cleanup_file;
    }

    // Working with file and buffer
    printf("The file was opened and memory was allocated successfully.\n");

    // Resource release
    free(buffer);
    fclose(file);
    return 0;

cleanup_file:
    fclose(file);

error:
    return 1;
}
