
//Take two integer numbers.Calculate the sum, subtraction, multiplication and division of them.//

#include<stdio.h>
int main()
{
    int num1,num2,result;

    printf("Please enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    result=num1+num2;
    printf("the sum is =%d\n",result);

    result=num1-num2;
    printf("the subtraction is=%d\n",result);

    result=num1*num2;
    printf("the multiplication is=%d\n",result);

    result=num1/num2;
    printf("the division is=%d\n",result);

    getch();

}
