#include <stdio.h>

int main() {
    
    int a, b;
    scanf("%d %d", &a, &b);
    
   for(int i=1; i<=a; i++){
       printf("%d ", b*i);
   }  
    return 0;
}