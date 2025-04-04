#include <stdio.h>
#include <stdbool.h>

_Bool isUnique(int,int);
int find_unique_digit_product(int n) {
    // Implement the function
    
    
    
    long product = 1;
    int x = n;
    
    if(n==0){
        return 0;
    }
    
    for(int i=0; i<=9; i++){
        
        while(n>0){
            int rem = n%10;
            if(rem==i){
                product = product*i;
                break;
            }
            n = n/10;
        }
        
        n= x;
    }
    
    return product;
    

}


int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", find_unique_digit_product(n));
    return 0;
}



