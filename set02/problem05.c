//Write a program to find GCD _(HCF)_ of two numbers.
# include<stdio.h>
int input()
{
    int n;
    printf("Enter the value to find gcd:");
    scanf("%d",&n);
    return n;
}
int find_gcd(int a, int b)
{
    int gcd;
    for(int i=2;i<=a && i<=b; i++)
    {
        if (a %i == 0 && b%i==0){
            gcd = i;
        }
    }
    return gcd;
}
void output(int a, int b, int gcd)
{
    printf("The gcd of %d and %d is %d\n",a,b,gcd);
}
int main()
{
    int a,b,gcd;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}