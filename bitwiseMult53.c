#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    // 3.5 = 2 + 1 + 0.5
    int ans = (n<<1) + n + (n>>1);
    printf("%d", ans);
    
    
    return 0;
}