
/*Take two integers A and B and swap them using the XOR (^)
operator.*/

#include<stdio.h>
int main()
{
    int A,B,T;
     printf("Enter the first integer:");
     scanf("%d",&A);

     printf("Enter the second integer:");
     scanf("%d",&B);

     T = A^B;
     A = T^A;
     B = T^B;

    printf("After swapping:\n");
    printf("The first integer A = %d\n", A);
    printf("The second integer B = %d\n", B);

    return 0;


}
