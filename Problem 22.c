
//Write a C program to enter any number and calculate its square root.//
#include<stdio.h>
int main()
{
    float x,result;
    printf("Please enter the number:");

    scanf("%f",&x);

    result=sqrt(x);

    printf("Square root of the number:%.4f\n",result);

    return 0;

}
