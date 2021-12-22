#include<stdio.h>
#include<math.h>
main()
{
	int number,Onesdigit=0;
    printf("Enter the number");
	scanf("%d",&number);
	Onesdigit=number%10;
	printf("Onesdigit %d",Onesdigit);
}

