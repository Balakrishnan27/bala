#include<stdio.h>
void main()
{
    char a;
    printf("enter the character");
    scanf("%c",&a);
    if((a>='a'&a<='z')||(a>='A'&a<='Z'))
    printf("\nthe character is character");
    else
    printf("\nthe character is not an alphabet");
}
