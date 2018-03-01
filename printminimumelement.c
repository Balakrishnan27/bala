#include <stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,n;
    clrscr();
    printf("Enter an array number\n");
    scanf("%d",&n);
    printf("Enter the number\n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    printf("The Number is %d\n",a[i]);
    if(a[n]<a[n-1]&&a[n]<a[n-2])
    printf("%d is minimum element",a[n]);
    else
    if(a[n-1]<a[n-2]&&a[n-1]<a[n])
    printf("%d is minimum element",a[n-1]);
    else
    printf("%d is minimum element",a[n-2]);
    getch();
}
