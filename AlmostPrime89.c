#include <stdio.h>
#include <stdbool.h>

int main() {

    int n;
    scanf("%d", &n);
    int count = 0;
    
    for(int i=4; i<=n; i++){
     
        int y = i;
        int innercount = 0;
        int product = 1;
        
        for(int j=2; j<=i/2; j++){  
                 while(y%j == 0 && y>0){
                    innercount++;
                    product *= j;
                    y = y/j; 
                  }    
            
            if(product == i){
                break;
            }
        }
        
        if(product == i && innercount==2){
              count++;
           }  
    }
    
    printf("%d", count);
    
    return 0;
}