#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int table5[10];
    for (int i=0;i<10;i++){
        table5[i]=n*(i+1);
    }
    printf("Tables of %d :\n",n);
    for(int i=0;i<10;i++){
        printf("%d ",table5[i]);
    }
}