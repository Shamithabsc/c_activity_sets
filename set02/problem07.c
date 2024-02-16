//Write a program to find the area of a triangle.
#include<stdio.h>
struct _triangle {
	float base, altitude, area;
};
typedef struct _triangle Triangle;

Triangle input_triangle()
{
	Triangle T;
	printf("Enter the base value:");
	scanf("%f",&T.base);
	printf("Enter the altitude value:");
	scanf("%f",&T.altitude);
	return T;
}
void find_area(Triangle *t)
{
	float area;
	t->area = (t->altitude * t->base)*0.5;
}
void output(Triangle t)
{
	printf("The area of triangle is %f\n",t.area);
}
int main()
{
	float base,altitude,area;
	Triangle t=input_triangle();
	find_area(&t);
	output(t);
	return 0;
}