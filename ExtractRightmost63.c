#include <stdio.h>

int main() {

     int n;
    scanf("%d", &n);
    int count = 1;
        
    if(n == 0){
        printf("%d", 0);
        return 0;
    }
    
    for(int i=1; i<=32; i++){
        if((n&1) == 1){
        printf("%d", count);
        return 0;
        }
        else{
            n= n>>1;
            count++;
        }
    }
    
    return 0;
} 