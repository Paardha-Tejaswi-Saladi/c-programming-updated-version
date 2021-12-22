#include<stdio.h>
main()
{
	int a;
	printf("Enter the marks",a);
	scanf("%d",&a);
	if(a>=90)
	{
	printf("Student got A Grade");
    }
    else if(a>=80)
    {
    printf("Student got B Grade");	
	}
	else if(a>=70)
	{
		printf("Student got C Grade");
	}
	else if(a>=60)
	{
		printf("Student got D Grade");
	}
	else if(a<50)
	{
		printf("Student got F Grade which means fail");
	}
}
