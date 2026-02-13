
//Write a C program to find power of any number(x^y)//
#include<stdio.h>
int main()
{
    int x,y,result;
    printf("please enter the base:");
    scanf("%d",&x);

    printf("Please enter the power:");
    scanf("%d",&y);

    result=pow(x,y);

    printf("Power of the number is:%d\n",result);

    return 0;

}
