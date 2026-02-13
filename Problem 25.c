
//Write a C program to calculate the area of an equilateral triangle.//
#include<stdio.h>
int main ()
{
    float a,area;
    printf("Enter the side of equilateral triangle:");
    scanf("%f",&a);

    area=(0.433*(a*a));

    printf("The area of equilateral triangle is:%.4f\n",area);

    return 0;


}
