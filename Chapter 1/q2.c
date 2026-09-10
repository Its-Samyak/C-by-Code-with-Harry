#include<stdio.h>
int main(){
    float radius,height;
    printf("Enter the radius of the circle : ");
    scanf("%f",&radius);
    printf("Enter the height of the cylinder : ");
    scanf("%f",&height);
    float area=3.14*radius*radius;
    float areacylinder=area*height;
    printf("Area of the circle is %.2f sq units\n",area);
    printf("Area of Cylinder is %.2f sq units",areacylinder);
    return 0;
}