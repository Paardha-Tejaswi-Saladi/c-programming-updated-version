#include<stdio.h>
main()
{
	int u,cost;
	printf("Enter the number of units",u);
	scanf("%d",&u);
	if(u<=50)
	{
		cost=u*1;
	}
	else if(u<=51&&u>=100)
	{
	    cost=(50+(u-50)*2);
	}
	else if(u<=101&&u>=200)
	{
	    cost=(100+(u-100)*3);
	}
	printf("Cost is %d",cost);
}
