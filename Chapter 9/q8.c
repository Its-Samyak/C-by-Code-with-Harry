#include <stdio.h>

typedef struct bankAccount
{
    char name[32];
    int accNo;
    char ifsc[16];
    float balance;
    char branchName[100];
    // fieds used - name,account number,Ifsc code,balance,branchName because they are basic details of every customer's bank account in any bank
} acc;

int main()
{
    return 0;
}