#include <stdio.h>

int main() {
    int a,digit,rev=0;
    scanf("%d",&a);
    while(a){
        digit=a%10;
        rev=rev*10+digit;
        a=a/10;
    }
    printf("%d",rev);
    return 0;
}