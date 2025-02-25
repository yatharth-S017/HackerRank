#include <stdio.h>

int main() {

   int n;
    scanf("%d", &n);
    
    
    if(n<=1){
        printf("Shape Not Possible");
    }
    else{
        for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("*");
        }
        for(int i=1; i<=2; i++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    }
    
    
    
    
    return 0;
}