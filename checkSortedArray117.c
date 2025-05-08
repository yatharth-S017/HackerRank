#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    int flag = 0;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            flag++;
        }
    }
    
    if(flag==0){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    return 0;
}
