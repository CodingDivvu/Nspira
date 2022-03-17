#include<stdio.h>
int main()
{
    int number1,number2,number3,output;
    printf("Enter the first number:");
    scanf("%d",&number1);
    printf("Enter the second number:");
    scanf("%d",&number2);
    printf("Enter the third number:");
    scanf("%d",&number3);
    output=(number1*number2)+(number2*number3);
    printf("Expected output for the given data: %d",output);

}