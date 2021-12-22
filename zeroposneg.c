#include<stdio.h>
main()
{
	int a;
	printf("Enter the number",a);
	scanf("%d",&a);
	if(a==0)
	{
		printf("a is zero");
	}
	else if(a>0)
	{
		printf("a is a positive number");
	}
	else
	{
		printf("a is a negative number");
	}
}
