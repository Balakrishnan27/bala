#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("Enter The Number a:\n");
    scanf("%d",&a);
    printf("Enter The Power b:\n");
    scanf("%d",&b);
    c=pow(a,b);
    printf("The Value Is %d",c);
  getch();
}
