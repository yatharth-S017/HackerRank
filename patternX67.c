#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    if(n<=1){
        printf("Shape Not Possible");
    }
    else if(n%2 == 0){
        for(int i=1; i<=n+1; i++){
            for(int j=1; j<=n+1; j++){
                if( i==j || i+j == n+2){
                    printf("*");
                }
                else{
                    printf(" ");
                }

            }
            printf("\n");
        }
        
    }else{
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if( i==j || i+j == n+1){
                    printf("*");
                }
                else{
                    printf(" ");
                }

            }
            printf("\n");
        }
    }
     
    return 0;
}