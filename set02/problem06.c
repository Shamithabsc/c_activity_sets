//Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
    printf("Enter a string:");
    scanf("%s",a);
}
void str_reverse(char *str, char *rev_str) {
    int len=strlen(str);
    for(int i=0 ; i < len ; i++){
        rev_str[i]=str[len-i-1];
    }
    rev_str[len] = '\0'; // Null-terminate the reversed string
}
void output(char *a, char *reverse_a)
{
    printf("The string to be reversed is %s\n",a);
    printf("The reversed string is:%s\n",reverse_a);
}
int main(){
    char a[100];
    char reverse[100];
    input_string(a);
    str_reverse(a,reverse);
    output(a,reverse);
    return 0;
}