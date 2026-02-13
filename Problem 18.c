
//Write a C program to enter temperature in °Celsius and convert it into °Fahrenheit.//
#include<stdio.h>
int main()
{
    float t,C,F;
    printf("Please enter the temperature in Celcius:");
    scanf("%f",&t);

    C=t;
    F=((9*C/5)+32);

    printf("The converted form of Celcius to Fahrenheit is:%f\n",F);

    return 0;

}
