#include<stdio.h>
int main(){
    float salary,tax=0;
    printf("Enter the income amount in lakh per annum: ");
    scanf("%f",&salary);
    if ((salary>=2.5) && (salary<5.0)){
        tax=(salary*5)/100;
        printf("Tax Payable : %.1f lakhs",tax);
    }
    else if ((salary>=5.0) && (salary<10)){
        tax=(salary*20)/100;
        printf("Tax Payable : %.1f lakhs",tax);
    }
    else if (salary>=10){
        tax=(salary*30)/100;
        printf("Tax Payable : %.1f lakhs",tax);
    }
    else{
        printf("Enter valid amount!");
    }
    
    return 0;
}