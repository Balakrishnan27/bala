#include<stdio.h>
#include<conio.h>
void main()
{
    int a,n,b,c,f,d;
    clrscr();
    printf("enter the first value a:\n");
    scanf("%d",&a);
    printf("enter the difference b:\n");
    scanf("%d",&b);
    printf("enter the total number of value:\n");
    scanf("%d",&n);
     c=a+((n-1)*b);
     f=n/2;
     d=f*(a+c);
     printf("the sum of the given values in AP %d",d);
     getch();
}
