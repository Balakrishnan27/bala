#include<stdio.h>
#include<conio.h>
void main()
{
        int b,a,l,s,k;
        clrscr();
        printf("Enter the first time b:\n");
        scanf("%d",&b);
        printf("Enter the second time a:\n");
        scanf("%d",&a);
         b=(b/60)&&(b%60);
        a=(a/60)&&(a%60);
        l=a-b;
        printf("The remaining time from the given is %d hours %d minutes",l);
        getch();
}
