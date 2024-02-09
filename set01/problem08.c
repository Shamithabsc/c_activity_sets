//Write a C program to find sum of _n_ different numbers entered by the user.
#include<stdio.h>
int input_array_size(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    return n;
}

void input_array(int n, int a[n])
{
    for(int i=0;i<n;i++){
    printf("Enter the values of number:",i+1);
    scanf("%d",&a[i]);
    }
}

int sum_n_array(int n, int a[n]){
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum+a[i];
    }
    return sum;
}

void output(int n,int sum)
{
    printf("The sum of %d numbers is %d\n",n,sum);
}

int main()
{
    int n=input_array_size();
    int a[n];
    input_array(n,a);
    int sum=sum_n_array(n,a);
    output(n,sum);
    return 0;
}
