#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int count = 1;
    
    if(n==-1){
        printf("-1");
    }
   else{
       for(int i=1; i<=32; i++){
        if((n&1) == 0){
            printf("%d", count);
            return 0;
        }
        else if((n&1) == 1){
            n = n>>1;
            count++;
        }
        
    }
   }
    
        
       
    
    return 0;
}