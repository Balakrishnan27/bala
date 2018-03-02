#include <stdio.h>
int main(void) 
{
int a[1000],i,j,t,b;
printf("Enter the limit:");
scanf("%d",&b);
printf("\nEnter the series:");
for(i=0;i<b;i++)
scanf("%d",&a[i]);
for(i=0;i<b;i++)
     {
         for(j=0;j<b;j++)
         {
               if(a[i]>a[j])
             {
                   t=a[j]; 
                   a[j]=a[i];
                   a[i]=t;
             }	
        }
    }
printf("\nOutput is :%d\t",a[b%2]);
return 0;
}
