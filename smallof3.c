#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	printf("Enter a,b and c");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&a<c)
	{
		printf("a is the smallest number");
	}
	else if(b<a&&b<c)
	{
		printf("b is the smallest number");
	}
	else
	{
		printf("c is the smallest number");
	}
}
