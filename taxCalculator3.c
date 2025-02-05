#include <stdio.h>

int main() {
    
    float income;
    scanf("%f", &income);
    float tax;
    
    if(income <= 250000 && income>= 0){
        printf("%0.2f", 0.00);                    
    }
    
    else if(income >250000 && income<=500000){
        tax = ((income -250000)*5)/100;
        printf("%0.2f", tax);
    }
    else if(income > 500000 &&  income <= 1000000){
       tax = (250000*5)/100 + ((income-500000)*20)/100;
        printf("%0.2f", tax);
    }
    else if(income > 1000000){
      tax = (250000*5)/100 + (500000*20)/100 + 
            ((income - 1000000)*30)/100; 
        printf("%0.2f", tax);
    }
    
    else{
        printf("INVALID");
    }

    return 0;
}