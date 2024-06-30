#include <stdio.h>

int main() {
    int n, h = 0, ut = 0;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] >= 1) {
            h += arr[i];
        } else {
            if (h == 0) {
                ut++;
            } else {
                h--;
            }
        }
    }
    
    printf("%d\n", ut);
    return 0;
}
