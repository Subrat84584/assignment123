// write the program to print the date,month and year. 
#include<stdio.h>
int main()
{
	int day,month,year;
	printf("enter the day format of:DD/MM/YY");
	scanf("%d %d %d",&day,&month,&year);
	printf("day-%d,month-%d,year-%d",day,month,year);
	return 0;
}
