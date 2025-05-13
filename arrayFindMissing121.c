#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int arr[n-1];
    
    for(int i=0; i<n-1; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i=1; i<=n; i++){
        int flag=0;
        for(int j=0; j<n-1; j++){
            if(arr[j] == i){
                flag++;
                break;
            }
        }
        
        if(flag==0){
            printf("%d", i);
            break;
        }
    }
    // print
    return 0;
}