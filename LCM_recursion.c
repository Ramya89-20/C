#include <stdio.h>
int a,b;
int res,i=1;
int LCM(int a,int b,int min){
    if(a%min==0 && b%min==0){
        return min;
    }
    else{
        min--;
        LCM(a,b,min);
    }
}
int main() {
    int min;
   scanf("%d %d",&a,&b);
   if(a>b){
    min=b;
}
else{
    min=a;
}
   res=LCM(a,b,min);
   printf("LCM of %d and %d is %d",a,b,(a*b)/res);
}
