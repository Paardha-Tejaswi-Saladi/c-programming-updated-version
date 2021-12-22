#include<stdio.h>
main()
{
	int a,b;
    printf("Enter a and b");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
    	printf("%d is equal to %d",a,b);
	}
	else
	{
		printf("%d is not equal to %d",a,b);
	}
}

