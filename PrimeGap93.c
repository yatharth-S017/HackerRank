#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

  _Bool isprime(int x){
      if(x<2) return false;
      if(x==2) return true;
      
      for(int i=2; i<=x/2; i++){
            if(x%i == 0){
                return false;
            }
      }
      
      return true;
  }

int main() {

    int n;
    scanf("%d", &n);
    int p1 = 0;
    int p2 = 0;
    
    for(int i=n-1; i>1; i--){
        if(isprime(i)){
            p2 = i;
            break;
        }
    }
    for(int i=n+1; i<INT_MAX; i++){
        if(isprime(i)){
            p1 = i;
            break;
        }
    }
    
    int ans = p1 - p2;
    printf("%d", ans);
    
    return 0;
}