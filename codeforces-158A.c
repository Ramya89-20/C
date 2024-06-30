#include <stdio.h>

int main() {
    int n, k, c = 0, kk;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    kk = arr[k - 1];
    for (int i = 0; i < n; i++) {
        if (arr[i] >= kk && arr[i] != 0) {
            c++;
        }
    }
    printf("%d\n", c);
    return 0;
}
