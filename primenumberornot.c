#include <stdio.h>
#include<conio.h>
int main()
{
    int a,i,b= 0;
clrscr();
    printf("Enter a positive integer a: ");
    scanf("%d",&a);
    for(i=2;i<=a/2;++i)
    {
        // condition for nonprime number
        if(a%i==0)
        {
            b=1;
            break;
        }
    }
if (b==0)
        printf("%d is a prime number.",a);
    else
        printf("%d is not a prime number.",a);
    return 0;
}
