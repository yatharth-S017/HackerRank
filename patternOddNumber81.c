#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int num =3;
    int num1 = 3;
    
    for(int i=1; i<=n; i++){
        int sum = 0;
        
//         space
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        
        
//         calculating sum
        for(int j=1; j<=2*i-2; j++){
            sum += num1;
            num1+=2;
        }
        
        
        for(int j=1; j<=2*i-1; j++){
            if(i != j){
                printf("%d ", num);
                num+=2;
                
            }else{
                if(i==1 && j==1){
                    printf("%d", 1);
                }else{
                    printf("%d ", sum);
                }
                
            }
            
        }
        
       
     printf("\n");   
        
    }
    return 0;
}