#include <stdio.h>
int main()
{
    char name[30];
    int salary;

    FILE *fptr;
    fptr = fopen("q4file.txt", "w");

    printf("Enter name1 : ");
    scanf("%s", &name);
    printf("Enter salary1 : ");
    scanf("%d", &salary);

    fprintf(fptr, "%s, ", name);
    fprintf(fptr, "%d", salary);

    printf("\n");
    fprintf(fptr,"\n");

    printf("Enter name2 : ");
    scanf("%s", &name);
    printf("Enter salary2 : ");
    scanf("%d", &salary);

    fprintf(fptr, "%s, ", name);
    fprintf(fptr, "%d", salary);

    return 0;
}