#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        
        int prev = i;
        for(int j=1; j<=i; j++){
            if(j==1){
                printf("%d ",prev);
            }
            else if(j%2==0){
                prev = prev + (2*n - 2*i +1);
                printf("%d ", prev);
            }
            else{
                prev =  prev + 2*(i-j+1);
                printf("%d ",prev);
            }
        }
        printf("\n");
    }
    return 0;
}