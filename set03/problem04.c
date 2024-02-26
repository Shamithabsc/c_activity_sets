// Write a program to find nth number in fibonacci sequence.
// Fibonacci Sequence is of the form: `0, 1, 1, 2, 3, 5, 8, 13, ...`
#include<stdio.h>
int input()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    return n;
}
int find_fibo(int n)
{
    if (n<=1){
        return n;
    }
    int t1 = 0,t2 = 1,tn;
    for(int i = 2 ;i<=n;i++){
    printf("the %d number:%d\n",i,t2);
    tn = t1 + t2;
    t1 = t2;
    t2 = tn;
    }
    return t2;
}
void output(int n, int fibo)
{
    printf("fibo(%d)= %d\n",n,fibo);
}
int main(){
    int n = input();
    int fibo = find_fibo(n);
    output(n,fibo);
    return 0;
}