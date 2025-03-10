#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        //space
        for(int j=1; j<=(n-i); j++){
            printf(" ");    
        }
        int temp = i-1;
        for(int j=1; j<=(2*i-1); j++){
            if(i>=j){
                printf("%d", temp--);
            }else{
                printf("%d", ++temp+1);
                
            }
        }
        printf("\n");
    }
    return 0;
}