#include <stdio.h>

int is_evil_number(int n) {
    // Your code here to count 1s in binary
    // int temp = n;
    int count=0;
    
    for(int i=0; i<=31; i++){
       if( (n&1) == 1){
           count++;
       }
        n= n>>1;
    }
    
    if(count % 2 == 0){
        return 1;
    }else{
        return 0;
    }
    
    
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", is_evil_number(n));
    return 0;
}