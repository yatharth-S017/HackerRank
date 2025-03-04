#include <stdio.h>

int main() {
    
    
    int n;
    scanf("%d", &n);
    
    
    
    if(n <= 2){
        printf("Shape Not Possible");
    }
    else{
        
        if(n%2 != 0){
        n= n+1;
       }
    
    for(int i=1; i<=n/2; i++){
        for(int j=1; j<=n/2-i; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            if(j==1 || j==i){
                printf("*");
            }else{
                printf(" ");
            }
            
        }
        
        for(int j=1; j<=i; j++){
            if(j==i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    for(int i=1; i<=n/2; i++){
        for(int j=1; j<=n/2; j++){
            if(j== n/2){
                printf("*");
            }else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
        
        
        }
    
    return 0;
}