#include<stdio.h>
int main()
{
    int i,number1=1,number2,j;
    printf("The numbers in series:%d\n",number1);
    for(int i=1;i<6;i++)
    {
        number2=(number1*2)+2;
        number1=number2;
    }
    printf("enter the input from 1 to 6\n:");
    scanf("%d",&i);
    printf("The numbers in series:%d\n",number2);
    return 0;
}