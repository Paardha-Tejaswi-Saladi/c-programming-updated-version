#include<stdio.h>
main()
{
	int a,b,c,triangle;
	printf("Enter the sides of the triangle",a,b,c);
	scanf("%d%d%d",&a,&b,&c);
	if(a==b==c)
	{
		printf("The triangle is equilateral",triangle);
	}
	else if(a==b||b==c||c==a)
	{
		printf("The triangle is isosceles",triangle);
	}
	else
	{
		printf("The triangle is scalene",triangle);
	}
}
