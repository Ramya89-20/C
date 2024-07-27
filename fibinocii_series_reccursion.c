#include <stdio.h>
int i=0,j=1,n,temp;
int print()
{
    if(n!=0)
    {
        printf("%d ",i+j);
        temp=i;
        i=j;
        j=temp+j;
        n--;
        print();
    }
}
int main() {
   scanf("%d",&n);
   n-=2;
   printf("0 ");
   printf("1 ");
   print();
   return 0;
}
