#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

_Bool isprime(int n){
    if(n<2) return false;
    if(n==2) return true;
    
    
    for(int i=2; i<=n/2; i++){
        if(n%i == 0){
            return false;
        }
    }
    
    return true;
}


int main() {

    int n;
    scanf("%d", &n);
    int sum= 0;
    // int x=2;
    
    
        
        for(int i=2; i<INT_MAX; i++){
            if(isprime(i) && n>0){
                sum += i;
                n--;
            }  
            if(n==0){
                break;
            }
        }
        
         printf("%d", sum);
    
    return 0;
}