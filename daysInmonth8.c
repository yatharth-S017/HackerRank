#include <stdio.h>
#include <string.h>

int main() {

    int month;
    int year;
    scanf("%d", &month);
    scanf("%d", &year);
    
    
    if(month<1 || month>12){
        printf("Invalid Month\n");
        
    }
    if(year < 1){
        printf("Invalid Year\n");
        return 0;
    }
    
        
        
            if(month==1 || month==3 || month==5 || month==7
                || month==8 || month==10 || month==12){
                printf("%d", 31);
             }
        else if(month==4 || month==6 || month==9 || 
                 month==11){
               printf("%d", 30);
        }
        else if(month==2){
                  if((year%4==0 && year%100 != 0) || 
                      (year%400 == 0)){
                      printf("%d", 29);
                  }else{
                      printf("%d", 28);
                  }   
          }   
                    
    return 0;
            
}