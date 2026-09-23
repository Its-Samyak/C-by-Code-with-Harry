#include<stdio.h>
int main(){
    FILE* ptr;
    FILE* fptr;

    ptr=fopen("q5file.txt","r");
    int number;
    fscanf(ptr,"%d",&number);

    printf("Number was %d\n",number);

    fclose(ptr);
    fptr=fopen("q5file.txt","w");
    fprintf(fptr,"%d",number*2);

    printf("Now number is doubled to %d\n",number*2);

    fclose(fptr);
    return 0;
}