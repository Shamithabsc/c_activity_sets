//Write a program to find whether the given 3 points form a triangle
#include<stdio.h>
#include<math.h>
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
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float side1 =  sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    float side2 =  sqrt(pow(x3-x2,2) + pow(y3-y2,2));
    float side3 =  sqrt(pow(x3-x1,2) + pow(y3-y1,2));

    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
    {
        return 1;
    }
    else {
        return 0;
    }

}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if(result == 1)
    {
    printf("The points (%f, %f), (%f, %f) and (%f, %f) forms a triangle\n",x1,y1,x2,y2,x3,y3);
    }
    else{
    printf("The points (%f, %f), (%f, %f) and (%f, %f) do not form a triangle\n",x1,y1,x2,y2,x3,y3);
    }
}
int main()
{
    float x1,y1,x2,y2,x3,y3;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    int result = is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}
