#include<stdio.h>
#include<math.h>
main()
{
    int principle,rate,time,Simpleinterest;
	printf("Enter the principle");
	scanf("%d",&principle);
	printf("Enter the rate");
	scanf("%d",&rate);
    printf("Enter the time");
    scanf("%d",&time);
	Simpleinterest=(principle*rate*time)/100;
	printf("Simpleinterest %d",Simpleinterest);
}

