#include <stdio.h>

int main() {

    int a,b;
    scanf("%d %d", &a, &b);
    int num = a-b;
    int x =(num >> 31) & 1;
    if(x){
        printf("%d",a);
    }else{
        printf("%d",b);
    }
    
    
    return 0;
}