#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    
    
    for(int i=1; i<=n; i++){
        int odd = 1;
        int even = 2;
        for(int j=1; j<=i; j++){
            if(i%2 != 0){
                printf("%d ", odd);
                odd+=2;
            }else{
                printf("%d ", even);
                even+=2;
            }
        }
        printf("\n");
    }
    return 0;
}