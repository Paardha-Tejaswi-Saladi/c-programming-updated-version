#include<stdio.h>
main()
{
  int i,n;
  i=1;
  printf("Enter the value of n");
  scanf("%d",&n);
  while(n>=1)
  { 
    printf("%d\n",n);
    n=n-1;
  }
  printf("End");
}
