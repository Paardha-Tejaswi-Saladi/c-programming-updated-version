#include<stdio.h>
int main()
{
	int a,b,c,k;
	printf("Enter the three numbers",a,b,c);
	scanf("%d%d%d",&a,&b,&c);
    switch(a>b&&a>c)
	{
		case 1:
		printf("a is the maximum number",a);
		case 0:switch(b>c)
	    {
	    	case 1:printf("b is the maximum number",b);
	    	case 0:printf("c is the maximum number",c);
		}
	}

}
	
