#include <stdio.h>
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(i*2)+1;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}