#include <stdio.h>
int prime(int n){
    int c=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==0 ){
        return n;
    }
    return 0;
}
int main() {
    int a,b,z=0;
    scanf("%d %d",&a,&b);
    int arr[b],j=0;
    for(int i=a;i<=b;i++){
        if(prime(i)!=0){
            arr[j]=prime(i);
            z++;
            j++;
        }
    }
    printf("%d",arr[1]);
    for(int k=2;k<z;k++){
        printf(",%d",arr[k]);
    }
    return 0;
}
