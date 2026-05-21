#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch1, ch2;

    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    do {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);

        if (ch1 != ch2) {
            printf("Files are NOT same.\n");

            fclose(fp1);
            fclose(fp2);

            return 0;
        }

    } while (ch1 != EOF && ch2 != EOF);

    if (ch1 == EOF && ch2 == EOF)
        printf("Files are SAME.\n");
    else
        printf("Files are NOT same.\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}