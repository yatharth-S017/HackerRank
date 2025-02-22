#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int temp = 1;
    
    if(n==1){
        printf("<1>");
    }
    else{
        for(int i=1; i<=n; i++){
        if(i==1){
            printf("<%d ", i);
        }else if(i==n){
            printf("%d>", 2*temp);
        }
        
        else{
            printf("%d ", 2*temp);
            temp = 2*temp;
        }
       
       }
        
    }
    
    
    
    return 0;
}