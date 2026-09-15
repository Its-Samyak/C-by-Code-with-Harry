#include<stdio.h>
int main(){
    int table[10][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<10;j++){
            switch(i){
                case 0:
                table[j][i]=2*(j+1); break;
                case 1:
                table[j][i]=7*(j+1); break;
                case 2:
                table[j][i]=9*(j+1); break;
            }
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<10;j++){
            printf("%d ",table[j][i]);
        }
        printf("\n");
    }
}