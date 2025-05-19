#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    int firstlargest = INT_MIN;
    int secondlargest = INT_MIN;
        
    if(n<=1){
        return -1;
    }
    
    for(int i=0; i<n; i++){
        if(arr[i] > firstlargest){
            secondlargest = firstlargest;
            firstlargest = arr[i];
        }
        else if(arr[i] < firstlargest && arr[i]>secondlargest){
            secondlargest = arr[i];
        }
        
    }
    if(secondlargest == INT_MIN){
        return -1;
    }
    return secondlargest;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}