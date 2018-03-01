#include<stdio.h>
void main()
{
int a[100],b,i,j,temp;
printf("enter the limit");
scanf("%d",&b);
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
for(j=i+1;j<b;j++)
{
if(a[i]>a[j]))
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<b;i++)
{
printf("%d\t",a[i]);
}
return 0;
}
