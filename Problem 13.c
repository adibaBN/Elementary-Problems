#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5;

    printf("Please enter 5 subjects marks:");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

    m1=(m1/200)*100;
    m2=(m2/200)*100;
    m3=(m3/200)*100;
    m4=(m4/200)*100;
    m5=(m5/200)*100;

    printf("The percentages of 5 subjects marks are:%f%% %f%% %f%% %f%% %f%%\n",m1,m2,m3,m4,m5);

    return 0;


}
