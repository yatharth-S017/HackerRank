#include <stdio.h>
#include <limits.h>

int main() {

    int n;
    scanf("%d", &n);
    int x = n;
    
    
//     counting the number of digit
    int count=0;
    while(x>0){
        x=x/10;
        count++;
    }
    
    
    
    for(int i=1; i<=count; i++){
        int final = 0;
        int y = count;
         while(y==count){
            int lastdigit = n%10;
            n = n/10;
            final =lastdigit * pow(10, count-1) + n;
            y--;
         }
        printf("%d\n", final);
         n = final; 
    }
    return 0;
}