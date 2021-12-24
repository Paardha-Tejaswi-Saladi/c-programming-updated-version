#include <stdio.h>
main()
{
   int n,temp,rem,rev=0;
   printf("Enter a number");
   scanf("%d",&n);
   temp=n;
   while(temp>0)
   {
      rem=temp%10;
      rev=rev*10+rem;
      temp=temp/10;
   }
   printf("reversed number is %d",rev); 
   if(n==rev )
      printf("\n%d is Palindrome Number",n);
   else
      printf("\n%d is not the Palindrome Number",n);
}
