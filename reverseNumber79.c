#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int temp=1;
    int x=0;
    
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(j==1){
                x = temp;
                printf("%d ", x);
                temp+=i+1;
            }else{
                printf("%d ", --x);
            }
        }
        printf("\n");
    }
    return 0;
}