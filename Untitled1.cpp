#include<stdio.h>
main() 
{
    int a=3,b=4,n;
    scanf("%d",&n);
    switch(n)
    {
    case 1:
	printf("a+b is %d",a+b);
	break;
	case 2:
    printf("a-b is %d",a-b);
    break;
    case 3:
    printf("a*b is %d",a*b);
    break;
    case 4:
    printf("a/b is %d",a/b);
    break;
    case 5:
    printf("a%b is %d",a%b);
    break;
    }
}
