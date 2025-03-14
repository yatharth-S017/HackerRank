#include <stdio.h>
#include <stdbool.h>
#include <limits.h> 

_Bool isprime(int n) {

    if(n<2) return false;
  if (n == 2) return true;
   
    for (int i = 2; i <= n / 2; i++) {
      if (n % i == 0) {
        return false;
      }
    }

  
  return true;
}

int main() {

    int n;
    scanf("%d", &n);
    int count1 = 0;
    int count2 = 0;
    int p1 = 0;
    int p2 = 0;
    
    if(isprime(n)){
        printf("%d", n);
    }else if(n<2){
        printf("%d", 2);
    }
    else{
        for(int i=n+1; i<INT_MAX; i++){
            count1++;
            if(isprime(i)){  
                 p1 = i;
                break;
            }
        }
        
        for(int i=n-1; i>=2; i--){
            count2++;
            if(isprime(i)){ 
                p2 = i;
                break;
            }
        }
        
        if(count1 == count2){
            printf("%d", p1>p2?p2:p1);
        }
        else if(count1 < count2){
            printf("%d", p1);
        }else{
            printf("%d", p2);
        }
        
    }
        
    
    
    
    return 0;
}