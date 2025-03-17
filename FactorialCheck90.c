#include <stdio.h>

int main() {

    unsigned long long n;
    scanf("%llu", &n);
        unsigned long long fact = 1;
        unsigned int i=1;
        
        while(fact <= n){
            if(n == fact){
                printf("%u", i);
                return 0;
            }
            i++;
            fact *= i;
            
        }
        printf("NO");
    
    return 0;
}