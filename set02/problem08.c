//Write a program to find the triangle with smallest area in n given triangles.
#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

int input_n(){
	int n;
	printf("Enter number of triangles:");
	scanf("%d",&n);
	return n;
}

Triangle input_triangle(){
	Triangle t;
	printf("Enter the base:");
	scanf("%f",&t.base);

	printf("Enter the altitude:");
	scanf("%f",&t.altitude);
	return t;
}
void input_n_triangles(int n, Triangle t[n])
{
	for(int i = 0; i < n; i++){
		printf("Enter the %d traingle\n",i+1);
		t[i]=input_triangle();
	}
}

void find_area(Triangle *t)
{ 
	t->area = t->altitude * t->base * 0.5;
}
void find_n_areas(int n, Triangle t[n])
{
	for(int i = 0; i < n; i++){
		find_area(&t[i]);
		printf("The area of %d triangle is %f\n",i+1,t[i].area);
	}
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
	Triangle smallest = t[0];
	for(int i=1; i<n ; i++){
		if(t[i].area < smallest.area){
			smallest = t[i];
		}
	}
	return smallest;
}
void output(int n, Triangle t[],Triangle smallest)
{
	printf("The smallest triangle from %d triangles is %f\n",n,smallest.area);
}
int main(){
	 int n;
    n = input_n();
    Triangle t[100], smallest;
    input_n_triangles(n,t);
    find_n_areas(n,t);
    smallest = find_smallest_triangle(n,t);
    output(n,t,smallest);
    return 0;
}