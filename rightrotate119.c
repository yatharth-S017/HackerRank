#include <stdio.h>

// Function to rotate the array
void rotateArray(int arr[], int n, int k) {
    
    int t = k%n;
    
    
        int start = 0;
        int last = t-1;
        
         while(start < last){
            int temp = arr[start];
             arr[start] = arr[last];
             arr[last] = temp;
             start++;
             last--;
         }
    
        
         int start2 = t;
         int last2 = n-1;
    
          while(start2 < last2){
              int temp = arr[start2];
              arr[start2] = arr[last2];
              arr[last2] = temp;
              start2++;
              last2--;
          }
    
    
          int fstart = 0;
           int flast = n-1;
            while(fstart < flast){
                int temp = arr[fstart];
                arr[fstart] = arr[flast];
                arr[flast] = temp;
                fstart++;
                flast--;
            }    
}



int main() {
    int n, k;
    // Reading input
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    // Call the function to rotate the array
    rotateArray(arr, n, k);
    
    // Print the rotated array
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}