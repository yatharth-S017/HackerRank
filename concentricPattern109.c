#include <stdio.h>
#include <math.h>

int main() {

   int n;
    scanf("%d", &n);
    
    
    for(int i=0; i<=2*n-2; i++){
        for(int j=0; j<=2*n-2; j++){
            
        int top = i;
        int bottom = (2*n - 2) - i;
        int left = j;
        int right = (2*n - 2) - j;
        
        int hmin = fmin(top,bottom);
        int wmin = fmin(left, right);
        int min = fmin(hmin, wmin);
        
        printf("%d ", n-min);
    }
    printf("\n");
    
    }
    return 0;
}