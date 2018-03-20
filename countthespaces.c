#include<stdio.h>
void main()
{
char b[150];
int count=0,i;
scanf("%s",&b);
for(i=0;b[i]!=NULL;i++)
{
if(b[i]==' ')
count++;
}
printf("%d",count);
}
