#include<stdio.h>
main()
{
	int a,b,c,Root1,Root2;
	printf("Enter the values of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	Root1=(-b+sqrt((b*b)-(4*a*c)))/2*a;
	printf("Root1 is %d",Root1);
	Root2=(-b-sqrt((b*b)-(4*a*c)))/2*a;
	printf("Root2 is %d",Root2);
}
