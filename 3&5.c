#include<stdio.h>
main()
{
	int number;
	printf("Enter a number"); 
	scanf("%d",&number);
	if(number%3==0)
	{
		if(number%5==0)
		{
			printf("The number is divisible by both 3 and 5");
		}
	}
	else
	{
	    printf("The number is not divisible by both 3 and 5");
    }
}
