#include <stdio.h>

int main() {

    int a,b;
    scanf("%d",&a);
    scanf("%d", &b);
    
    if(a==b){
        printf("No");
        return 0;
    }
    
    int x=a^b;
    if((x & x-1) == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}