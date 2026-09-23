#include<stdio.h>
int main(){
    int n,mul;
    printf("Enter n : ");
    scanf("%d",&n);
    FILE* fptr;
    fptr=fopen("q2file.txt","w");
    // char table[100];
    for(int i=1;i<=10;i++){
        mul=n*i;
        fprintf(fptr,"%d X %d = %d\n",n,i,mul);
    }
    printf("File written successfully!");
    fclose(fptr);
    return 0;
}