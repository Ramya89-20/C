
#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    char a[n],b[n];
    for(int i=0;i<n;i++){
    scanf("\n%c",&a[i]);
    }
    for(int i=0;i<=n;i++){
        b[i]=a[i]+32;
    }
    for(int i=0;i<=n;i++){
        printf("%c",b[i]);
    }
    return 0;
}
