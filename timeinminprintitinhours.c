#include<stdio.h>
#include<conio.h>
void main()
{
        int a,b,c;
        clrscr();
        printf("Enter the time a:\n");
        scanf("%d",&a);
        b=a/60;
        c=a%60;
        printf("%d Hours and %d minutes for the given time",b,c);
        getch();
}
