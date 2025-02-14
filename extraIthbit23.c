#include <stdio.h>

int main() {

    int n;
    int i;
    scanf("%d", &n);
    scanf("%d", &i);
    
    // if((ni)&1==1){
    //     printf("%d",1);
    // }else{
    //     printf("%d",0)
    // }
   int b = (n>>i)&1; 
   printf("%d",b);
    return 0;
}