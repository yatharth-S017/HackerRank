#include <stdio.h>
#include <stdbool.h>

int main() {

   int num;
    scanf("%d", &num);
    
    _Bool cond1 = false;
    _Bool cond2 = false;
    _Bool cond3 = false;
    
    if(num%2==0 && num>10){
        cond1=true;
    }
    if(num>15 && num%3==0){
        cond2 = true;
    }
    if(num%7 == 0){
        cond3 = true;
    }
    
    if(num<=0){
printf("The verdict for the number %d is: INVALID",num);
       return 0; 
    }
    
    
    if(cond1 && cond2 && cond3){
printf("The verdict for the number %d is: SUPERNATURAL",              num);
    }
    
    else if((cond1 && cond2) ||
             (cond2 && cond3) ||
             (cond1 && cond3)){
printf("The verdict for the number %d is: MIRACULOUS",num);
    }
    
    else if(cond1 || cond2 || cond3){
printf("The verdict for the number %d is: MAGICAL", num);
    }
    else{
printf("The verdict for the number %d is: NORMAL", num);
    }

    
    return 0;
}