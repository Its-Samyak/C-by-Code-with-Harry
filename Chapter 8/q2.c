#include<stdio.h>
int main(){
    char string[30];
    printf("Enter name : ");
    for(int i=0;i<6;i++){
        scanf("%c",&string[i]);
        fflush(stdin);
    }
    string[6]='\0';

    // scanf("%s",string);
    printf("Your name is %s",string);
    return 0;
}
// gives same answer but still %s is reliable.