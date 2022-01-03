#include<stdio.h>
main()
{
	int i,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=1;n>=i;n--)
	{
		printf("%d\n",n);
	}
}
