#include<stdio.h>
int main ()
{
    float l,w,p;

    printf("Please enter the length and width:");
    scanf("%f%f",&l,&w);

    p=2*(l+w);

    printf("The perimeter of the rectangle is:%f\n",p);

    return 0;

}
