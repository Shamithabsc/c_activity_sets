//Write a program to find the triangle with smallest area in n given triangles.

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

int input_n(){
	int n;
	printf("Enter number of triangles:");
	scanf("%f",&n);
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
	for(int i=0;i<n;i++){
		printf("Enter %d no. of triangle:\n",i+1);
		t[i]=input_triangle();
	}
}
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);