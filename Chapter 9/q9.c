#include<stdio.h>

typedef struct dates{
    int dd;
    int mm;
    int yyyy;
}dates;

void compare(dates x,dates y){
    if(x.yyyy<y.yyyy){
        printf("Date 2 is greater than Date 1");
    }
    else if(x.mm<y.mm){
        printf("Date 2 is greater than Date 1");
    }
    else if(x.dd<y.dd){
        printf("Date 2 is greater than Date 1");
    }
    else if(x.yyyy==y.yyyy && x.mm==y.mm && x.dd==y.dd){
        printf("Dates are equal");
    }
    else{
        printf("Date 1 is greater than Date 2");
    }
}
int main(){
    dates date1={12,9,2010};
    dates date2={12,8,2088};
    compare(date1,date2);
    return 0;
}