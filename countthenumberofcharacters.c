#include<stdio.h>
#include<conio.h>
void main()
{
char str[50];
int a;
clrscr();
printf( "Enter the sentence:\n ");
printf("\n");
gets(str);
a= strlen(str);
printf("\n");
printf("\n No.of characters in sentence is %d " ,a );
getch();
}
