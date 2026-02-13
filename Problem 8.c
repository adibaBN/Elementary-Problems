//Take 10 inputs of any type of number and find out the average of them.//

#include<stdio.h>
 int main()
 {
     int a,b,c,d,e,f,g,h,i,j,sum;
     printf("Enter the inputs:");
     scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

     sum=a+b+c+d+e+f+g+h+i+j;

     double avg = (double)sum/10.0;


     printf("sum=%d\n",sum);
     printf("Average =%f\n",avg);

     return 0;


 }
