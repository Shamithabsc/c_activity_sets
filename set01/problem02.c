//2. Write a C program to add two numbers.
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter value of number1:");
    scanf("%d",&a);
    printf("Enter value of number2:");
    scanf("%d",&b);
    sum = a - b;
    printf("The sum of %d and %d is %d", a, b, sum);
    return 0;
}
