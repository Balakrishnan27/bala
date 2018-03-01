#include<stdio.h>
int main()
{
   int n,a[100],i,temp,j,f;
   printf("enter the count\nenter the elements");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(j=1;j<=n;j++)
   {
      for(f=j+1;f<=n;f++)
      {
        if(a[j]>=a[f])
        {
        temp=a[j];
        a[j]=a[f];
        a[f]=temp;
            
        }
      }
   
   }
     printf(" %d\t",a[j/2]);
}
