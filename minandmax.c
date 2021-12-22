#include<stdio.h>
#include<math.h>
main()
{
	int a,b;
	printf("Enter a and b");
	scanf("%d%d",&a,&b);
	if (a>b)
	{
		printf("maximum number is %d and minimum number is %d",a,b);
	}
	else
	{
		printf("maximum number is %d and minimum number is",a,b);
	}
}
