
//Write a C program to enter the length and breadth of a rectangle and find its area.//
#include<stdio.h>
int main()
{
    float l,w,a;

    printf("Please enter the length and width of rectangle:");
    scanf("%f%f/n",&l,&w);

    a=(l*w);

    printf("The area of rectangle is:%f\n",a);

    return 0;

}
