#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if(n<=1){
        printf("Shape Not Possible");
    }
    else{
        
        
    
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            // hollow triangle
            if(i==1 || i==n ||j==1 || j==i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        // between space
        for(int j=1; j<=2*(n-i+1)-2;  j++){
            printf(" ");
        }
        
        // hollow triangle
       for(int j=1; j<=i; j++){
            // hollow triangle
            if(i==1 || i==n ||j==1 || j==i){
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