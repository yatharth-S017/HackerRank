#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int x = n;
    
    
    int square = x*x;
    
    int digit =0;
    while(n>0){
        n = n/10;
        digit++;
    }
    
    int last = 0;
    while(digit >0){
        int rem = square%10;
        last = last*10 + rem;
        square = square/10;
        
        digit--;
    }
    
    int last1=0;
    while(last >0){
        int rem=last%10;
        last1 = last1*10 +rem;
        last = last/10;
    }
    
    if(x == last1){
        printf("%d is automorphic", x);
    }else{
        printf("%d is not automorphic", x);
    }
    
    return 0;
}
