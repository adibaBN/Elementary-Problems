
//Write a C program to enter P, T, R and calculate Compound Interest.//
#include<stdio.h>
int main()
{
    float P,T,R,compound_interest;

    printf("Enter the principle amount:");
    scanf("%f",&P);
    printf("Enter the time (in days):");
    scanf("%f",&T);
    printf("Enter the rate of the interest (in percentage):");
    scanf("%f",&R);

    compound_interest=P*(pow((1+R/100),T))-P;

    printf("The compound_interest is:%.2f\n",compound_interest);

    return 0;

}
