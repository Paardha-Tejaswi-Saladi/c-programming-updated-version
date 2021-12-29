#include<stdio.h>
main()
{
	int i=1,n;
	printf("Enter a number",n);
	scanf("%d",&n);
	do
	{
		printf("%d\n",i);
		i++;
	}
	while (i<=n);
}
