#include <stdio.h>

int is_kaprekar(int n) {
    
    int square = n*n;
   int orig = n;
    
    int right = 0;
    int count = digit(n);
   
    while(count > 0){
        int rem = square%10;
        right = right*10 + rem;
        square = square/10;
        count--;
    }
    int x = reverse(right);
        

    
    if( (x+square) == orig){
        return 1;
    }else{
        return 0;
    }
  }




int digit(int n){
    int count = 0;
    while(n>0){
        n = n/10;
        count++;
    }
    
    return count;
}

int reverse(int x){
    int final = 0;
    while(x>0){
        int rem = x%10;
        final = final*10 + rem;
        x = x/10;
    }
    
    return final;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_kaprekar(n));
    return 0;
}