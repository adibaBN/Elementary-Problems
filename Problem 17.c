
//Write a C program to enter length in centimeter and convert it into meter and kilometer.//
#include<stdio.h>
int main()
{
    float l,cm,m,km;
    printf("Please enter the length in cm:");
    scanf("%f",&l);

    cm=l;
    m=(cm/100);
    km=(m/1000);

    printf("The converted form of length in cm to m is %f\nkm is %f:%f\n",m,km);

    return 0;


}
