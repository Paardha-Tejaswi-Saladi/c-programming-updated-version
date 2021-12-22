#include<stdio.h>
main()
{
	int n,i=1,fact=1;
	printf("Read the number n",n);
	scanf("%d",&n);
	while(i<=n)
	{
	fact=fact*i;	
	i++;
    }
	printf("Factorial of the given number is %d",fact);
   	
}
