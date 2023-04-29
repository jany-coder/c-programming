#include <stdio.h>

int main() {
    int m1, m2, d, x;
    
    scanf("%d %d %d", &m1, &m2, &d);
    
    x = (m1 * d) / m2;
    
    printf("%d", x);
    
    return 0;
}
