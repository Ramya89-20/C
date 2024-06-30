#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);
    
    int sp = n / m;
    int no = n % m;
    
    int res[4];
    res[0] = n * a;
    res[1] = no * a + sp * b;
    res[2] = (sp + 1) * b;
    
    for (int i = 1; i <= sp; i++) {
        res[3] = i * b + (n - i * m) * a;
    }
    
    int minimum = res[0];
    for (int i = 1; i < 4; i++) {
        if (res[i] < minimum) {
            minimum = res[i];
        }
    }
    
    printf("%d\n", minimum);
    return 0;
}
