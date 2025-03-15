#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int orig = n;
    int product = 1;
    int  sum =0;
    
    for(int i=2; i<=n; i++){
        while(n%i == 0 && n>0){
            product = product *i;
            sum = sum+i;
            n = n/i;
        }
        
    }
    
    if(product == orig){
        printf("%d", sum);
    }
    return 0;
}