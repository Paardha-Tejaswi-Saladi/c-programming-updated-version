#include<stdio.h>
main()
{
	int i=1,n,mul;
	printf("Enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		mul=n*i;
		i++;
		printf("%d\n",mul);
	}
}
