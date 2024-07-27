#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter array:");
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++){
        int m=arr[i],c=0;
        if(m!='&'){
        for(int j=1;j<=n;j++){
            if(m==arr[j] && arr[j]!='&'){
                c++;
                arr[j]='&';
            }
        }
        printf("%d=%d\n",m,c);
    }
    }
    return 0;
}
