#include <stdio.h>

int main() {

    unsigned n;
    scanf("%u", &n);
    unsigned orig = n;
    unsigned sum = 0;
    
    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            sum += i;
        } 
        
    }
    
    if(orig == sum && n!=1){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}