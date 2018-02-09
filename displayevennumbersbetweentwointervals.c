#include<stdio.h>
void main()
{
    int a,b,c,i;
    printf("Enter the Lower and Upper limits a and b:\n");
    scanf("%d %d",&a,&b);
     printf("The even numbers between %d and %d are \n",a,b);
  for(i=a+1;i<b;i++)
  {
   c=i%2;
   if(c==0)
   printf("\n %d",i);
    getch();
  }
}
