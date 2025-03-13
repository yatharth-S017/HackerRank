#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int x = n;
   
    int arr[32] ;
    int idx = 0;
    
    if(n== 0){
        printf("Binary equivalent of 0: 0");
        return 0;
    }
    
    while(n > 0){
        arr[idx] = n%2;
        n = n/2;
        idx++;
    }
    
    printf("Binary equivalent of %d: ", x);
    for(int i=idx-1; i>=0; i--){
        printf("%d",arr[i]);
    }
    
    return 0;
}