#include <stdio.h>
#include <stdbool.h>

_Bool isprime(int n){
    
    if(n<2) return false;
    if(n==2) return true;
    
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {

    long int n;
    scanf("%ld", &n);
    
    int count= 0;
   
    
   
    
    for(int i=1; i<n; i++){
        if(isprime(i) && isprime(i+2) && (i+2) <= n){
                count++;
        }
    }
    
    printf("%d", count);
    
    
      
    return 0;
}