
//Write a C program to enter two angles of a triangle and find the third angle.//
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the first angle:");
    scanf("%f",&a);
    printf("Enter the second angle:");
    scanf("%f",&b);

    c=(180-(a+b));

    printf("The third angle of triangle is:%f\n",c);

    return 0;

}
