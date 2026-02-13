
/*Write a C program to enter the base and height of a triangle and find its
area.*/
#include<stdio.h>
int main()
{
    float b,h,area;
    printf("Enter the base of triangle:");
    scanf("%f",&b);

    printf("Enter the height of triangle:");
    scanf("%f",&h);

    area=(0.5*b*h);

    printf("The area of triangle is:%.4f\n",area);

    return 0;

}
