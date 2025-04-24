#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>


int main() {
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int x, y;
        scanf("%d %d", &x, &y);
        
        if( (x-y+1)%9==0 && (x-y+1 >= 0)){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
        
        t--;
    }
     
    return 0;
}
