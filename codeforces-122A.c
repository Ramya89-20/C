#include <stdio.h>
int check(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] != 7 && arr[i] != 4) {
            return 0;
        }
    }
    return 1;
}
 
int main() {
    int num, res;
    scanf("%d", &num);
    if (num%4==0 || num%7==0 || num%47==0 || num%74==0 || num%44==0 || num%77==0 || num%444==0 || num%447==0 || num%474==0 || num%477==0 || num%744==0 || num%747==0 || num%774==0 || num%777==0) {
        printf("YES");
    } else {
        int digits[10]; 
        int size = 0;
        while (num > 0) {
            digits[size++] = num % 10;
            num = num / 10;
        }
        res = check(digits, size);
        
        if (res == 1) {
            printf("YES");
        } else {
            printf("NO");
        }
    }
    
    return 0;
}