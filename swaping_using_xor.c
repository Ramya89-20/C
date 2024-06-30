#include <stdio.h>

int main()
{
    int x=2,y=3;
    printf("Before Swaping x,y are ");
    printf("%d %d",x,y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("\nAfter Swaping x,y are ");
    printf("%d %d",x,y);
    return 0;
}