#include<stdio.h>
int main()
{
    int i,j,tn,n[100];
    printf("enter the total value:\n");
    scanf("%d",&tn);
    printf("the total number:%d\n",tn);
    for(i=0;i<tn;i++)
    {
        scanf("%d",&n[i]);
        printf("%d",n[i]);
    }
    for(j=0;j<tn;j++)
    {
        printf("\n%d  %d\n",n[j],j);
    }  
  return 0;  
}
