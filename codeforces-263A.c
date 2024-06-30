#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5][5];
    int x = -1, y = -1;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] == 1) {
                x = i;
                y = j;
                break;
            }
        }
        if (x != -1) break;
    }
    
    printf("%d\n", abs(x - 2) + abs(y - 2));
    return 0;
}
