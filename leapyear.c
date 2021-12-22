#include<stdio.h>
main()
{
	int a;
	printf("Enter the year",a);
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("%d is a leap year",a);
	}
	else if(a%100==0)
	{
		a%400==0;
		printf("a is a leap year",a);
	}
	else
	{
		printf("%d is not a leap year",a);
	}
}
