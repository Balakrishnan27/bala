#include<stdio.h>
void main()
{
    char a;
    printf("enter the alphabet");
    scanf("%c",&a);
    if((a>='a'&a<='z')||(a>='A'&a<='Z'))
    printf("\nthe character is alphabet");
    else
    printf("\nthe character is not an alphabhet");
}
