#include <stdio.h>
 
int main() {
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    while(a<=b){
        a=a*3;
        b=b*2;
        c=c+1;
    }
    printf("%d",c);
    return 0;
}