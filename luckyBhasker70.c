#include <stdio.h>

int main() {

    double money;
     int n ;
    scanf("%lf", &money);
    scanf("%d", &n);
    
    
    double min = money;
    double amount = money;
    
    // float lucky = money*0.7;
    // float stop = money*0.4;
    
    
    
    for(int i=1; i<=n; i++){
        
        
        
//         if money is less than 40%
        if(amount < money*0.4){
           printf("Stopped early after %d days: %.2lf\n", i-1 , amount);
            printf("Minimum amount held by Bhaskar: %.2lf\n", min);
            printf("Better Luck Next Time!");
            return 0;
        }
        
        
        if(i%6 == 0){
            amount = amount + (amount*0.7);
            i += 6;
        }
        else if(i%2 == 0){
            amount = amount - amount/8.0;
        }
        else if(i%3 == 0){
            amount = amount - amount/5.0;
        }
        else{
            amount = amount - (amount*0.1);
        }
        
//         update min amount after daily 
        if(min > amount){
            min = amount;
        }
        
        
           
    }
    
    
    
        printf("After %d days: %.2lf\n", n, amount);
        printf("Minimum amount held by Bhaskar: %.2lf\n", min);
    if(amount >= money*0.7){ 
        printf("Lucky Bhaskar");
    }
    else{
        printf("Better Luck Next Time!");
    }
    
    
    
    
//     else if(amount < lucky){
//         printf("After %d days: %.2f\n", n, amount);
//         printf("Minimum amount held by Bhaskar: %.2f\n", min);
        
//     }
    
    
    
    
    
    return 0;
}