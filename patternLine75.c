#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        
        //letter I
        for(int j=1; j<=n; j++){
            if(i==1 || i==n || j==(n/2)+1){
                printf("*");
            }else{
                printf(" ");
            }
        }
       
        
        
        //2 spaces
        for(int j=1; j<=2; j++){
            printf(" ");
        }
        
        
        //letter N
        for(int j=1; j<=n; j++){
            if(j==1 || j==n || i==j ){
                printf("*");
            }else{
                printf(" ");
            }
        }
        
        
        //2 spaces
        for(int j=1; j<=2; j++){
            printf(" ");
        }
        
        
        //letter N
        for(int j=1; j<=n; j++){
            if(j==1 || j==n || i==j ){
                printf("*");
            }else{
                printf(" ");
            }
        }
        
        //2 spaces
        for(int j=1; j<=2; j++){
            printf(" ");
        }
        
        
        
        
        //letter O
        for(int j=1; j<=n; j++){
            if( (i==1 || i==n || j==1 || j==n) && i != j && i+j != n+1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        
         //2 spaces
        for(int j=1; j<=2; j++){
            printf(" ");
        }
        
        
        
        
        // letter v
        for(int j=1; j<=i; j++){
            if(j==i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        //space
        for(int j=1; j<=2*(n-i+1)-3; j++){
            printf(" ");
        }
        
       
        for(int j=1; j<=i; j++){
            if(j==1 && i != n){
                printf("*");
            }else{
                printf(" ");
            }
        
        }
        
        
        
        
        //2 spaces
        if(i<n){
            for(int j=1; j<=3; j++){
            printf(" ");
            }
        }else{
                printf("  ");
        }
        
        
        
        
        
        // for(int j=1; j<=n; j++){
        //     if(j==1){
        //         printf("*");
        //     }else{
        //         printf(" ");
        //     }
        // }
        
        
        
        
        // letter A
        for(int j=1; j<=n; j++){
            if( (i==1 || i==n/2+1 || j==1 || j==n) && !(i==1 && (j==1||j==n) )){
                printf("*");
            }else{
                printf(" ");
            }
        }
        
        
        
         //2 spaces
        for(int j=1; j<=2; j++){
            printf(" ");
        }
        
        
        // letter T
        for(int j=1; j<=n; j++){
            if(i==1 || j==n/2+1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        
        
         //2 spaces
        for(int j=1; j<=2; j++){
            printf(" ");
        }
        
        
        
         //letter I
        for(int j=1; j<=n; j++){
            if(i==1 || i==n || j==(n/2)+1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        
        
         //2 spaces
        for(int j=1; j<=2; j++){
            printf(" ");
        }
        
        
         //letter O
        for(int j=1; j<=n; j++){
            if( (i==1 || i==n || j==1 || j==n) && i != j && i+j != n+1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        
        //2 spaces
        for(int j=1; j<=2; j++){
            printf(" ");
        }
        
        
        
        //letter N
        for(int j=1; j<=n; j++){
            if(j==1 || j==n || i==j ){
                printf("*");
            }else{
                printf(" ");
            }
        }
        
        
        printf("\n");
        
        
        
    }
    


    return 0; 
}
