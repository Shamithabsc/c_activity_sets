//Write a C program to find the sum of _n_ complex numbers
#include<stdio.h>
struct _complex {
   float real,imaginary;
};
  typedef struct _complex Complex; 
int get_n(){
    int n;
    printf("Enter the n numbers:");
    scanf("%d", &n);
    return n;
}
Complex input_complex(){
    Complex num;
    printf("Enter the real and imaginary part of complex number:");
    scanf("%f", &num.real);
    scanf("%f", &num.imaginary);
    return num;
} 
void input_n_complex(int n, Complex c[n]){
    for(int i=0;i<n;i++){
        printf("Enter the %d number\n",i+1);
        c[i]=input_complex();
    }
}
Complex add(Complex a, Complex b){
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}
Complex add_n_complex(int n, Complex c[n]){
    Complex sum= c[0];
    for (int i = 0; i < n; i++)
    {
        sum = add(sum,c[i]);
    }
    return sum;   
}
void output(int n, Complex c[n], Complex result){
    printf("The sum of %d numbers:",n);
    for(int i=0; i<n;i++){
        printf("\nComplex number %d: %f+%f",i+1,c[i].real,c[i].imaginary);
    }
    printf("\nThe result is:%f+%fi",result.real,result.imaginary);
}
int main(){
    int n = get_n();
    Complex numbers[n];
    input_n_complex(n,numbers);
    Complex result = add_n_complex(n,numbers);
    output(n,numbers,result);
    return 0;
}