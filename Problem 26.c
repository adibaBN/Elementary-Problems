
/*Write a C program to enter marks of five subjects and calculate total, average and
percentage.*/
#include<stdio.h>
int main ()
{
    float m1,m2,m3,m4,m5,total,avg,percentage;

    printf("Enter the first subject mark:");
    scanf("%f",&m1);
    printf("Enter the second subject mark:");
    scanf("%f",&m2);
    printf("Enter the third subject mark:");
    scanf("%f",&m3);
    printf("Enter the forth subject mark:");
    scanf("%f",&m4);
    printf("Enter the fifth subject mark:");
    scanf("%f",&m5);

    total=(m1+m2+m3+m4+m5);
    avg=(m1+m2+m3+m4+m5)/5;


    percentage;
    m1=(m1/100)*100;
    m2=(m2/100)*100;
    m3=(m3/100)*100;
    m4=(m4/100)*100;
    m5=(m5/100)*100;

    printf("Total marks of 5 subjects is:%.2f\n",total);
    printf("Average mark of 5 subjects is:%.2f\n",avg);


    printf("Percentage of first subject is:%.2f%%\n",m1);
    printf("Percentage of second subject is:%.2f%%\n",m2);
    printf("Percentage of third subject is:%.2f%%\n",m3);
    printf("Percentage of forth subject is:%.2f%%\n",m4);
    printf("Percentage of fifth subject is:%.2f%%\n",m5);

    return 0;


}
