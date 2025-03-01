#include <stdio.h>

int main() {

   int n ;
    scanf("%d", &n);
    
    
    if(n < 2){
        printf("Shape Not Possible");
    }
    else{
        
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int j=1; j<=2*i -1; j++){
            if(i==1 || i==n || j==1 || j==2*i-1 || j==(2*i-1)/2 +1){
                printf("*");
            }else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    
//     second part
    for(int i=2; i<=n; i++){
        for(int j=1; j<=i-1; j++){
            printf(" ");
        }
        
//         2*(n-i+1)-1 = 2(n-i) +1
        for(int j=1; j<=2*(n-i) +1; j++){
          if( i == 1 || j==1 || j==2*(n-i) +1 || j==(2*(n-i) +1)/2 +1){
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