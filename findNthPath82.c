#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

    _Bool isPrime(int num) {
            if (num <= 1) {
                return false;
            }
            for (int i = 2; i <= num/2; i++) {
                if (num % i == 0) {
                    return false;
                }
            }
            return true;
            
    }
    

int main() {

    int n;
    scanf("%d", &n);
    int count=0;
    
    
    for (int i=0; i<=INT_MAX; i++) {
        if (isPrime(i)) {
            count++;
            
            if(count==n){
            printf("%d", i);
                return 0;
            }
        }
        
        
    }
    
    
    return 0;
}