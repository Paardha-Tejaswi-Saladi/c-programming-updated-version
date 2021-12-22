#include<stdio.h>
#include<math.h>
main()
{
	int x1,y1,x2,y2,l=0;
	printf("Enter the value of x1,y1,x2,y2");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	l=sqrt((x2-x1)^2 + (y2-y1)^2);
	printf("l value is %d",l);
}
