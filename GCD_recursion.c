#include <stdio.h>
int a,b,res,i=1;
int min;
int GCD(int a,int b){
    if(a%min==0 && b%min==0){
        return min;
    }
    else{
        min--;
        GCD(a,b);
    }
}
int main() {
   scanf("%d %d",&a,&b);
   if(a>b){
    min=b;
}
else{
    min=a;
}
   res=GCD(a,b);
   printf("GCD of %d and %d is %d",a,b,res);
}
