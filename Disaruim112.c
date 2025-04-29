#include <stdio.h>
#include <math.h>



int is_disarium_number(int n) {
    // Implement this function
    int original = n;
    int sum = 0;
    int x = digit(n);
    int m = x;
    while(n>0){
        int rem = n%10;
        sum += pow(rem,m);
        m--;
        n=n/10;
    }
    
    
    if(original == sum){
        return 1;
    }else{
        return 0;
    }
}


int digit(int n){
    int count =0;
    while(n>0){
        n = n/10;
        count++;
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_disarium_number(n));
    return 0;
}


