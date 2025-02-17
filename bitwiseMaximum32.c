#include <stdio.h>

int main() {
    int num1, num2;
    
    scanf("%d %d", &num1, &num2);
     int x=num1-num2;
    
    int sign = (x>>31)&1;
    
    //int ans = num1*(1-sign) + num2*sign;
    
    //int  ans = num1 & (~sign) | num2 & sign;
    
    
    int ans = num1 - sign*x;
    printf("%d", ans);
    
    return 0;
}