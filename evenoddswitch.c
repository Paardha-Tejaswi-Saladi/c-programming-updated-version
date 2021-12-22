#include<stdio.h>
int main()
{
	char k;
	int quantity,Bill;
	printf("B-Burger,F-Frenchfries,P-Pizza,S-Sandwhich");
	scanf("%c",&k);
    switch(k)
	{
		case'B':
		printf("You have chosen for Burger");
		printf("Enter quantity");
		scanf("%d",&quantity);
		Bill=quantity*200;
		break;
		case'F':
		printf("You have chosen for Frenchfries");
		printf("Enter quantity");
		scanf("%d",&quantity);
		Bill=quantity*50;
		break;
		case'P':
		printf("You have chosen for Pizza");
		printf("Enter quantity");
		scanf("%d",&quantity);
		Bill=quantity*500;
		break;
		case'S':
		printf("You have chosen for Sandwhich")	;
		printf("Enter quantity");
		scanf("%d",&quantity);
		Bill=quantity*150;
		break;
	//default:printf("Invalid choice");
	printf("Bill is %d",Bill);
	}

}
	
