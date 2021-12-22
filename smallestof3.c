#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	printf("Enter a,b and c");
	scanf("%d",&a,&b,&c);
	if(b<a&&b<c)
	{
		printf("b is the smallest number");
	}
	else if(c<a&&c<b)
	{
		printf("c is the smallest number");
	}
	else
	{
		printf("a is the smallest number");
	}
}
