#include<stdio.h>
main() 
{
    int a=3,b=4,n;
    char k;
    printf("operator");
    scanf("%c",&k);
    switch(k)
    {
    case '+':
	printf("a+b is %d",a+b);
	break;
	case '-':
    printf("a-b is %d",a-b);
    break;
    case '*':
    printf("a*b is %d",a*b);
    break;
    case '/':
    printf("a/b is %d",a/b);
    break;
    case '%':
    printf("a%b is %d",a%b);
    break;
    default:printf("invalid");
	
	}}
    
	
		
