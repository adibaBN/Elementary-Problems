
/* Take input of 3 integer numbers using scanf() function and calculate the sum
of them./*

#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;

  //Taking input of three integer numbers
    printf("PLease enter the integer number:");
    scanf("%d%d%d",&num1,&num2,&num3);

    //Calculating the sum
    sum=num1+num2+num3;

   //Displaying the sum
    printf("sum of %d,%d and %d is:%d\n",num1,num2,num3,sum);
     getch();
}

