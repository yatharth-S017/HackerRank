#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int orig = n;
    int final = 0;
    
    while(n>0){
        int last = n%10;
        final = final*10 + last;
        n = n/10;
    }
    
    if(orig == final){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}