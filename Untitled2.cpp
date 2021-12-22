#include<stdio.h>

int main()
{
	int s1,s2,s3;
	printf("Enter three sides of a triangle");
	scanf("s1=%d ,s2=%d, s3=%d", &s1 ,&s2, &s3);
	if( s1==s2 && s2==s3 && s3==s1)
	printf(" it ia an equilateral triangle");
	else if (s1!=s2&& s3!=s1 && s2!=s3)
	printf(" it is a scalene triangle");
	else 
	printf(" it is an isoceles triangle");
	return(0);
	
}
