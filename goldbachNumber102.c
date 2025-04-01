#include <stdio.h>
#include <stdbool.h>

_Bool isprime(int n){
    if(n<2) return false;
    if(n==2) return true;
    
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main() {

   int n;
    scanf("%d", &n);
    
    int flag = 0;
    
    if(n%2 != 0){
        printf("No Solution");
        return 0;
    }
     
    for(int i=2; i<n; i++){
        if(isprime(i) && isprime(n-i) && flag == 0){
            printf("%d %d", i , n-i);
            flag++;
            break;
            
        }
    }
    
    if(flag==0){
        printf("No Solution");
    }
        
   
    
    return 0;
}