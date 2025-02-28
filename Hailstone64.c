#include <stdio.h>
#include <math.h>


int main() {
    int n;
    scanf("%d", &n);
    int max = n;
    if(n <= 0){
        max = 1;
    }

    while (n != 1 ) { 
        printf("%d -> ", n);
            if(n>max){
                max = n;
            }
        
        if(n < 1){
            n = 1;
        }
        
        else if (n % 3 == 0) {
            n = n / 3;
        } else if (n % 5 == 0 && n%3 != 0) {
            n = n - 5;
        }
        
        else if (n > 1) {
            n = n * 5;
        }
    }

    if (n == 1) {
        printf("1\n");
    }
    printf("Max Number: %d", max);
    
    
    
    return 0;
}
