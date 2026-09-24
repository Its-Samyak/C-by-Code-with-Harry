#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
// rock =0
// scissor=1
// paper=2
void toLowerCase(char str[]) {

for (int i = 0; str[i] != '\0'; i++) {

str[i] = tolower(str[i]);

}

}
int main()
{
    int ypoint=0,cpoint=0;
    int secret, result;
    char guess[10];
    
    printf("-----Rock Paper Scissor-----\n");
    srand(time(NULL));  // Seed the random number generator
    do{
    secret = rand() % 3 + 0; // Random number between 0 and 2
    printf("Enter your choice (Rock,Paper,Scissor) : ");
    scanf("%s", &guess);
    toLowerCase(guess);
    if (strcmp("rock", guess) == 0)
    {
        if(secret==0){
            result=0;
        }
        if(secret==1){
            result=1;
        }
        if(secret==2){
            result=-1;
        }
    }
    else if (strcmp("paper", guess) == 0)
    {
        if(secret==0){
            result=1;
        }
        if(secret==1){
            result=-1;
        }
        if(secret==2){
            result=0;
        }
    }
    else if (strcmp("scissor", guess) == 0)
    {
        if(secret==0){
            result=-1;
        }
        if(secret==1){
            result=0;
        }
        if(secret==2){
            result=1;
        }
    }
    else{
        printf("Enter exact word!\n");
        continue;
    }


    if(secret==1){
        printf("My guess -> Scissor\n");
    }
    else if(secret==0){
        printf("My guess -> Rock\n");
    }
    else{
        printf("My guess -> Paper\n");
    }
    if(result==1){
        printf("You win!\n");
        ypoint++;
    }
    else if(result==(-1)){
        printf("You Lose!\n");
        cpoint++;
    }
    else{
        printf("Draw!\n");
    }
    printf("--------------------\n");
    printf("Computer score : %d\n",cpoint);
    printf("Your Points : %d\n",ypoint);
    printf("--------------------\n");

    if((cpoint==5) || (ypoint==5)) break;
}while(1);
    
    return 0;
}