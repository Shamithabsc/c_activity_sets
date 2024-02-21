//Write a program to find the distance between 2 points
#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Enter the x-coordinate of 1st point:");
    scanf("%f",x1);
    printf("Enter the y-coordinate of 1st point:");
    scanf("%f",y1);
    printf("Enter the x-coordinate of 2nd point:");
    scanf("%f",x2);
    printf("Enter the y-coordinate of 2nd point:");
    scanf("%f",y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
    float distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    return distance;
}
void output(float x1, float y1, float x2, float y2, float distance)
{
   printf("The distance between point (%f, %f) and (%f, %f) is %f\n",x1,y1,x2,y2,distance);
}
int main(){
    float x1,y1,x2,y2,distance;
    input(&x1,&y1,&x2,&y2);
    distance = find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
    return 0;
}