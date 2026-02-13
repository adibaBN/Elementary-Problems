
//Write a C program to convert days into years, weeks and days.//
#include<stdio.h>
int main()
{
    float Days,Weeks,Years;
    printf("Please enter the number of days:");
    scanf("%f",&Days);

    Days=Days/1;
    Weeks=Days/7;
    Years=Days/365;

    printf("The number of years is %f\nThe number of weeks is %f\nThe number of days is %f:%f%f%f\n",Years,Weeks,Days);

    return 0;

}
