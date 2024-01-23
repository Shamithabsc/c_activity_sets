//Write a C program to compare three numbers using **pass by reference**

#include<stdio.h>
int input(int *a, int *b, int *c)
{
    printf("Enter number1:");
    scanf("%d",a);
    printf("Enter number2:");
    scanf("%d",b);
    printf("Enter number3:");
    scanf("%d",c);
}
void compare(int a, int b, int c, int *largest)
{
    if (a>=b && a>=c)
    {   *largest = a;    }
    else if (b>=a && b>=c)
    {   *largest = b;    }
    else 
    { *largest = c;  }
}
void output(int a, int b, int c, int largest)
{
    printf("The largest of %d,%d and %d is %d",a,b,c,largest);
}
int main(){
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}
