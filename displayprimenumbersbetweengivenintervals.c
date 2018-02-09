#include<stdio.h>
void main()
{
int a,b,i,j,c=0;
printf("Enter the Lower and Upper limits a and b:\n");
scanf("%d %d",&a,&b);
for(i=a;i<b;i++)
{
    for(j=2;j<i;j++)
    {
    if(i%j==0)
        ++c;
    }
if(c==0)
{
    printf("\n%d",i);
}
c=0;
}
return 0;
}
