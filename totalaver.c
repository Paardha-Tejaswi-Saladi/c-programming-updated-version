#include<stdio.h>
#include<math.h>
main()
{
	int maths,english,science,social,language;
	float total,average,percentage;
	printf("Enter the marks of maths,english,science,social,language");
	scanf("%d%d%d%d%d",&maths,&english,&science,&social,&language);
    total=maths+english+science+social+language;
	printf("total marks are %f\n",total);
	average=(total)/5;
	printf("average is %f\n",average);
	percentage=(total*100)/500;
	printf("percentage is %f\n",percentage);
}
