
//Take an integer (0<N<128) input and print its corresponding character.//

#include<stdio.h>
int main()
{
    int num;
    printf("Please enter an integer number:");
    scanf("%d",&num);

    if(num> 0 && num< 128){
        printf("The corresponding character for %d is: %c\n",num);
    }else {
    printf("The input is out of range.\n");}

    return 0;
}
