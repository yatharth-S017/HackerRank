#include <stdio.h>
#include <stdbool.h>

_Bool isprime(int n) {
    if(n<2) return false;

    if (n == 2)  return true;
   
    for (int i = 2; i <= n / 2; i++) {
      if (n % i == 0) {
        return false;
      }
    }

  return true;
}  

int main() {

     int l, r;
    scanf("%d %d", &l , &r);
    int count = 0;
    int arr[r-l+1];
    int idx=0;
    
    
    for(int i=l; i<=r; i++){
        if(isprime(i)){
            
            arr[idx] = i;
            idx++;
            count++;
        }
    }
    
    printf("%d\n", count);
    for(int i=0; i<count; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}