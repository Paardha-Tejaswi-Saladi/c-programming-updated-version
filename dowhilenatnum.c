#include<stdio.h>
main()
{
	int i=1,n;
	printf("Enter the value of n",n);
	scanf("%d",&n);
	do
	{
		printf("%d\n",i);
		i=i+1;
	}
	while(i<=n);
}
