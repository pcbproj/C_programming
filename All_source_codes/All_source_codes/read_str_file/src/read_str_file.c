#include <stdio.h>

int main() {
    FILE *fp;
    char str[60];

    fp = fopen("file.txt", "r");
    if(fp == NULL) {
        perror("Error in opening file");
        return -1;
    }

    while (fgets(str, sizeof(str), fp) != NULL) {
		printf("%s", str);
	}

    fclose(fp);
    fp = NULL;

    return 0;
}
