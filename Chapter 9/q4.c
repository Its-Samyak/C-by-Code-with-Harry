#include <stdio.h>
struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important
void show(struct employee* e){
    (*e).code=0;
}
int main()
{
    struct employee e1;
    e1.code=56;
    struct employee* ptr;
    ptr = &e1;
    // now we can print structure elements using:
    printf("%d\n", (*ptr).code);
    printf("%d\n",ptr -> code);
    show(&e1);
    printf("%d\n",e1.code);
}