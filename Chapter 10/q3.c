#include <stdio.h>
int main()
{

    FILE *fptr;
    FILE *ptr;
    fptr = fopen("q3file.txt", "w");
    ptr = fopen("q2file.txt", "r");

    char ch;

    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, fptr);
    }

    fclose(ptr);
    fclose(fptr);

    fptr = fopen("q3file.txt", "a");
    ptr = fopen("q2file.txt", "r");

    fputs("\n", fptr);
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, fptr);
    }

    fclose(fptr);
    fclose(ptr);

    printf("File written with no errors!\n");

    return 0;
}