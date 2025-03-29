#include <stdio.h>
    
    int fact(int n){
        int fact = 1;
        for(int i=n; i>=1; i--){
            fact = fact*i;
        }
        return fact;
    }

int main() {

    int n;
    scanf("%d", &n);
    int orig = n;
    
    int sum = 0;
    while(n>0){
        int last = n%10;
        sum += fact(last);
        n = n/10;
    }
    
    
    if(sum == orig){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}