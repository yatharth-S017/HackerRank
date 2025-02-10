#include <stdio.h>

int main() {

   int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    printf("%d\n", (a^a)^(b^0));
    printf("%d", (b^b)^(a^0));
    
    // printf("%d", b);
    // printf("%d",a);
    return 0;
}