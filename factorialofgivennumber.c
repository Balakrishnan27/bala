#include<stdio.h>
int fact(int);
int main()
{
  int num,a;
  scanf("%d",&num);
  a=fact(num);
  printf("\nFactorial of %d is: %d",num,a);
  return 0;
}

int fact(int n){
   if(n==1)
   	return 1;
   else
   	return(n*fact(n-1));
 }
