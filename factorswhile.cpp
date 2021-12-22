#include<stdio.h>
main()
{
	int n,i=1,count=0;
	printf("Read the number n",n);
	scanf("%d",&n);
	while(i<=n)
	{	
	if(n%i==0)
	count++;
	i++;
   	if(count<=2)
    printf("It is a prime number",n);	
	else
    printf("not a prime",n); 
    }
}
