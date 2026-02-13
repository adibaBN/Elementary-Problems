
/*Write a C program to enter radius of a circle and find its diameter, circumference and
area.*/
#include <stdio.h>
int main()
{
    float r,d,c,a,pi;
    pi=3.1416;

    printf("Please enter the radius of circle:");
    scanf("%f",&r);

    d=(2*r);
    c=(2*pi*r);
    a=(pi*(r*r));

    printf("The diameter is %f\ncircumference is %f\narea of circle is:%f\n",d,c,a);

    return 0;

}
