//Write a program to find whether the given 3 points form a triangle
#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter the x-coordinate of 1st point:");
    scanf("%f",x1);
    printf("Enter the y-coordinate of 1st point:");
    scanf("%f",y1);
    printf("Enter the x-coordinate of 2nd point:");
    scanf("%f",x2);
    printf("Enter the y-coordinate of 2nd point:");
    scanf("%f",y2);
    printf("Enter the x-coordinate of 3rd point:");
    scanf("%f",x3);
    printf("Enter the y-coordinate of 3rd point:");
    scanf("%f",y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    ("The points (1.0, 1.0), (0.0, 0.0) and (1.0, 1.0) do not form a triangle");
}