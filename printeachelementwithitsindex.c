#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,b,a[100];
    printf("enter the total value:\n");
    scanf("%d",&b);
    printf("the total number:%d\n",b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        printf("%d",a[i]);
    }
    for(j=0;j<b;j++)
    {
        printf("\n%d  %d\n",a[j],j);
    }  
  return 0;  
}
