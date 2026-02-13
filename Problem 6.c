
//Print a floating point number using printf () function.//

#include<stdio.h>
int main()
{
    float num1,num2;
    printf("Please enter two float numbers:");
    scanf("%f%f",&num1,&num2);
    printf("The numbers are:%.1f%.1f\n",num1,num2);

    return 0;
}

