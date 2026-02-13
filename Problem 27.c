
//Write a C program to enter P, T, R and calculate Simple Interest.//
#include<stdio.h>
int main()
{
    float P,T,R,simple_interest;

    printf("Enter the principle amount:");
    scanf("%f",&P);
    printf("Enter the time (in days):");
    scanf("%f",&T);
    printf("Enter the rate of interest (in percentage):");
    scanf("%f",&R);

    simple_interest=(P*T*R)/100;

    printf("The simple_interest is:%.2f\n",simple_interest);

    return 0;

}
