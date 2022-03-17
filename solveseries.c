#include<stdio.h>
int main()
{
    int number1=1,number2,j;
    printf("enter the input from 1 to 6:");
    scanf("%d",&j);
    for(int i=1;i<j;i++)
    {
        number2=(number1*2)+2;
        number1=number2;
    }
    printf("%d",number2);
    return 0;
}