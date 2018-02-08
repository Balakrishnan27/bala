#include <stdio.h>
#include<conio.h>
int main()
{
   int num, reverse_num=0, remainder,b;
   clrscr();
   printf("Enter a number: ");
   scanf("%d", &num);

   /* Here we are generating a new number (reverse_num)
    * by reversing the digits of original input number
    */
   b=num;
   while(b!=0)
   {
      remainder=b%10;
      reverse_num=reverse_num*10+remainder;
      b/=10;
   } 

   /* If the original input number (num) is equal to
    * to its reverse (reverse_num) then its palindrome
    * else it is not.
    */ 
   if(reverse_num==num) 
      printf("%d is a palindrome number",num);
   else
      printf("%d is not a palindrome number",num);
   return 0;
}
