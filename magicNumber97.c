#include <stdio.h>

    int countdigit(int n){
        int count = 0;
        while(n>0){
            n = n/10;
            count++;
        }
        return count;
    }

int main() {

   int n;
    scanf("%d", &n);
    int x=n;
    
    
     
    while(countdigit(n) >1){
        int sum1 = 0;
        
        while(n>0){
            int last = n%10;
            sum1 += last;
            n = n/10;
        }
        
        n= sum1;
          
    }
    
    if(n == 1){
        printf("%d is a magic number", x);
    }else{
        printf("%d is not a magic number",x);
    }
    
    return 0;
}