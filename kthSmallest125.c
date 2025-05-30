#include <stdio.h>
#include <limits.h>

int kthSmallest(int arr[], int n, int k) {
    int prevmin = INT_MIN;  // To track previous minimum
    int currmin, minindex;

    for (int i = 0; i < k; i++) {
        currmin = INT_MAX;  // Set to maximum possible value
        minindex = -1;      // To track minimum index

        // Find the next smallest element greater than prevmin
        for (int j = 0; j < n; j++) {
            if (arr[j] > prevmin && arr[j] < currmin) {
                currmin = arr[j];
                minindex = j;
            }
        }

        // If no valid minimum found, return error value
        if (minindex == -1) {
            return -1;  // K is invalid or array is empty
        }

        // Mark element as processed
        arr[minindex] = INT_MAX;
        prevmin = currmin;  // Update prevmin only after marking
    }

    return prevmin;
}

int main() {
    int n, k;
    
    // Input number of elements
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input value of k
    scanf("%d", &k);

    // Find and print Kth smallest element
    int result = kthSmallest(arr, n, k);

    if (result == -1) {
        printf("Invalid input\n");
    } else {
        printf("%d\n", result);
    }

    return 0;
}
