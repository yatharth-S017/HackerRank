#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int count=0;
    for(int i=1; i<=4; i++){
        if((n&1) == 1){
        count++;
       } 
        n = n>>1;
      
    }
    
    
    printf("%d", count);
    return 0;
}