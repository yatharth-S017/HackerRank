#include <stdio.h>

void removeDuplicates(int arr[], int *n){
	// int x = *(n);
	// int k=0;
    
    if (*n == 0) {  
        return; // Handle empty array case  
    }  

    int k = 1; // Index to write the next unique element  

    for (int i = 1; i < *n; i++) {  
        if (arr[i] != arr[k - 1]) {  
            arr[k] = arr[i];  
            k++;  
        }  
    }  

    *n = k; // Update the size of the array  
    
    
//     for(int i=0; i<x; i++){
//         if(arr[i] == arr[i+1]){
//             k++;
//             for(int j=i+1; j<x-1; j++){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
                
//             }
//         }
        
//     }
    
//        // printf("%d\n", k);
//         *n = *n - k;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    removeDuplicates(arr, &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n%d\n", n); // Print new size

    return 0;
}