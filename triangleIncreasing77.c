#include <stdio.h>

int main() {

   int n; 
    scanf("%d", &n);
    
    
    for(int i=1; i<=n; i++){
        int num=i;
        int diff = n-1;
        for(int j=1; j<=i; j++){
            printf("%d ", num);
            num += diff;
            diff--;
        }
        printf("\n");
    }
    return 0;
}