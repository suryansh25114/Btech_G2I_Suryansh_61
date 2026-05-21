#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char word[50], str[50];
    int count = 0;

    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }

    printf("Enter the word to search: ");
    scanf("%s", word);

    while (fscanf(fp, "%s", str) != EOF) {

        if (strcmp(word, str) == 0) {
            count++;
        }
    }

    if (count > 0)
        printf("The word '%s' occurs %d times.\n", word, count);
    else
        printf("The word '%s' does not exist in the file.\n", word);

    fclose(fp);

    return 0;
}