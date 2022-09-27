//write the program to input the time ,the format is HH:MM 
#include<stdio.h>
int main()
{
	int hour,min;
	printf("enter the time the format of HH:MM");
	scanf("%d %d",&hour,&min);
	printf("%d hour %d min",hour,min);
	return 0;
}
