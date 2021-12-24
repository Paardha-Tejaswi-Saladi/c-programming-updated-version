#include<stdio.h>
main()
{
	int i=1,sum=0,n;
	printf("Enter the number");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		sum=sum+i;
		i++;
	}
		if(sum==n)
	    printf("%d is a perfect number",n);
	    else
	printf("It is not a perfect number",n);
}
