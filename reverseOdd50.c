#include <stdio.h>

int main() {

   int n;
    scanf("%d", &n);
    for(int i=n; i>=1; i--){
        if(i==1){
            printf("%d.", i*2-1);
        }else{
            printf("%d ", i*2-1);
        }
            
        
    }
   
    return 0;
}