#include<stdio.h>
int main(){
    int table[10][3];
    int n1,n2,n3;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    int value[3]={n1,n2,n3};
    for (int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            table[j][i]=value[i]*(j+1);
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<10;j++){
            printf("%d ",table[j][i]);
        }
        printf("\n");
    }
}