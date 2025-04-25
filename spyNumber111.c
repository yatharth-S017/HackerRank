#include <stdio.h>

int is_spy_number(int n) {
    
    int product = 1;
     int sum = 0;
    while(n>0){
        int rem = n%10;
        product*=rem;
        sum += rem;
        n = n/10;
    }
    
    if(product==sum){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", is_spy_number(n));
    return 0;
}