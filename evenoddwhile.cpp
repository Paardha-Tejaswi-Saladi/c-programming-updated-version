#include<stdio.h>
main()
{
	int n,num;
	printf("Read the number n",n);
	scanf("%d",&n);
	while(num<n)
	{
	num=num+1;	
	if(n%num==0)
	{
	printf("The factors of the given number are %d\n",num);
    }
    else
    {
    printf("Default");
    }
    }
}
