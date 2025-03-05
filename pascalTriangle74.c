#include <stdio.h>


//     int ncr(int n, int r){
        
        
// //         n fact
//         int nfact=1;
//         for(int i=n; i>=1; i--){
//             nfact *= i;
//         }
        
//         // r fact
//         int rfact = 1;
//         for(int i=r; i>=1; i--){
//             rfact *= i;
//         }
        
// //         n-r fact
//         int nrfact = 1;
//         int x = n-r;
//         for(int i=x; i>=1; i--){
//             nrfact *= i;
//         }
        
//         int ans = nfact / (rfact*nrfact);
//         return ans;
        
        

//     }

int main() {

    
    int n;
    scanf("%d",&n);
    
     
    //int nextprev;
    
    for(int i=0; i<n; i++){
        int prev=1;
        for(int j=1; j<n-i; j++){
            printf(" ");
        }
        
        
        for(int j=0; j<=i; j++){  
                // printf("%d ", ncr(i,j)); 
            printf("%d ", prev);
             prev = prev*(i-j)/(1+j);
            // printf("%d ", nextprev);
        }
        
        printf("\n");
    }
        
        
    return 0;
}