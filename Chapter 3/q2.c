#include<stdio.h>
int main(){
    float p,c,m;
    printf("Enter marks of Physics : ");
    scanf("%f",&p);
    printf("Enter marks of Chemistry : ");
    scanf("%f",&c);
    printf("Enter marks of Maths : ");
    scanf("%f",&m);
    float percentage=(p+m+c)/3.0;
    if(p>33 && m>33 && c>33 && percentage>40 ){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
    return 0; 
}