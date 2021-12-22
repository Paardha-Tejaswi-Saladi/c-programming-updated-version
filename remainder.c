#include<stdio.h>
main()
{
	int a,b,rem;
	printf("Enter dividend");
	scanf("%d",&a);
	printf("Enter divisor");
	scanf("%d",&b);
	rem=a-(a/b)*b;
	printf("The remainder is %d",rem);
}
