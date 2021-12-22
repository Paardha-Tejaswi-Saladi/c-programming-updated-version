#include<stdio.h>
main()
{
	int a;
	printf("Enter a character",a);
	scanf("%d",&a);
	if(a>=0&&a<=9)
	{
		printf("Entered value of a is a number",a);
	}
	else if(a>=65 && a<=122)
	{
		printf("Entered value of a is a character",a);
	}
	else
	{
		printf("Entered value of a is a special symbol",a);
	}
}
