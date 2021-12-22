#include<stdio.h>
int main()
{
  int n,i;
  printf("How many times you want to print *");
  
  scanf("%d",&n);
  
  while(i<n)
  { 
    printf("*");
    i++;
  }
  printf("End");
  
}
