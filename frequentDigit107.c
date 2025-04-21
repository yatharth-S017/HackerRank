#include <stdio.h>

int find_most_frequent_digit(int n) {
    //Implement this function
    int x= n;
    
    int max = 0;
    int maincount = -1;
    
    if(n==0){
        return 0;
    }
    
    for(int i=0; i<=9; i++){
        int count = 0;
        while(n>0){
            int rem= n%10;
            if(rem == i){
                count++;
            }
            n= n/10;    
        }
        
        if(count >= maincount){
            maincount = count;
            max= i;
        }
        
        n=x;
    }
    
    return max;
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", find_most_frequent_digit(n)); 
    return 0;
}