#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("file.txt", "w+");

    if(fp == NULL) {
        perror("Error in opening file");
        return -1;
    }

    fputs("This is PCBTEACH Course.\n", fp);
    fputs("I am happy to be here.", fp);

    fclose(fp);

    return 0;
}
