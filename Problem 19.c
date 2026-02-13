 /*Write a C program to enter temperature in Fahrenheit(°F) and convert it into
Celsius(°C)*/

#include<stdio.h>
int main()
{
    float t,C,F;

    printf("Please enter temperature in Fahrenheit:");
    scanf("%f",&t);

    F=t;
    C=((F-32)*5/9);

    printf("The converted form of Fahrenheit into Celcius is :%f\n",C);

    return 0;

}
