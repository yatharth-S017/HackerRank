#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int orig = n;
    
    int sum = 0;
    while(n>0){
        int last = n%10;
        sum += last;
        n=n/10;
    }
    
    if(orig % sum == 0){
        printf("%d is a harshad number", orig);
    }else{
        printf("%d is not a harshad number", orig);
    }
        
    
    return 0;
}
