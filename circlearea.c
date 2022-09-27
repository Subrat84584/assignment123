// write a program to calculate the Area of a circle.

#include<stdio.h>
int main()
{
	int r;
	float area;
	printf("entre radius");
	scanf("%d",&r);
	area=3.14 * r * r;
	printf("Area of the circle is=%f and having the radius is=%d",area,r);
	return 0;
}
