#include<stdio.h>
main()
{
	char ch,a,e,i,o,u;
	printf("Enter the character",ch);
	scanf("%c",&ch);
	switch(ch)
	{
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':	
		printf("ch is an vowel",ch);
		break;
        default: 
        printf("ch is a consonant",ch);
        break;
	}
}
