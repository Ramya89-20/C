#include <stdio.h>
#include <string.h>

int main() {
    int n, x = 0;
    scanf("%d", &n);
    char inp[4];
    
    for (int i = 0; i < n; i++) {
        scanf("%s", inp);
        if (strcmp(inp, "X++") == 0 || strcmp(inp, "++X") == 0) {
            x++;
        } else {
            x--;
        }
    }
    
    printf("%d\n", x);
    return 0;
}
