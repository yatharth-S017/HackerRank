#include <stdio.h>

int main() {

   int n,a,d;
    scanf("%d", &n);
    scanf("%d %d", &a, &d);
    
    for(int i=1; i<=n; i++){
        printf("%d ", a + (i-1)*d);
    }
    
    return 0;
}