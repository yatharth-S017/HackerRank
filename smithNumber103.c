#include <stdio.h>
#include <math.h>
#include <stdbool.h>

_Bool isprime(int n){
    if(n<2) return false;
    if(n==2) return true;
    
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int countdigit(int);
int is_smith_number(int n) {
    // Implement this function
    
    int orig = n;
    int x= n;
    
    
    if(isprime(n)) return 0; 
    
    // sum of its digit
    int sum = 0;
    while(n>0){
        int rem = n%10;
        sum += rem;
        n  = n/10;
    }
    
//     sum of its prime number
    int primesum = 0;
    for(int i=2; i<=orig/2; i++){
        while(x%i == 0 && x>0){
            
                int m = i;
                while(m>0){
                    int rem = m%10;
                    primesum += rem;
                     m = m/10;
                }
            x = x/i;
        }
        
    }
    
    if(sum == primesum){
        return 1;
    }else{
        return 0;
    }
    
    
}


int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_smith_number(n));
    return 0;
}