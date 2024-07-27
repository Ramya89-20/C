#include <stdio.h>
int main() 
{
    char a[100];
    scanf("%[^\n]",a);
    int s=0,c=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' '){
            s++;
        }
        else{
            c++;
        }
    }
    printf("\nNumber of spaces:%d",s);
    printf("\nNumber of charecters:%d",c);
    printf("\nNumber of words:%d",s+1);
    return 0;
}
