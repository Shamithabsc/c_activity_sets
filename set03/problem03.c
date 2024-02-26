// Write a program to check if the given number is prime
#include<stdio.h>

int input_number()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    return n;
}
int is_prime(int n)
{
    //to check the input number is not 1 or <1 since negative numbers are not prime or composite.
    if (n <= 1)
    {   return 0;  }
    
    for ( int i=2; i <= n/2 ;i++)
    {
        if(n % i == 0){
            return 0;
        }
    }
     return 1;    
}
void output(int n, int result)
{
    if (result==1){
    printf("%d is prime\n",n);
    }
    else
    { printf("%d is not prime\n",n);   }
}
int main(){
    int n =input_number();
    int result=is_prime(n);
    output(n,result);
    return 0;
}