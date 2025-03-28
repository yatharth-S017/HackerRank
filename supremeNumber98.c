#include <stdio.h>
#include <stdbool.h>
#include <math.h>

_Bool isprime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int x = n;
    int sum = 0;
    
    while (n > 0) {
        int rem = n % 10;
        sum += rem;
        n /= 10;
    }
    
    if (isprime(x) && isprime(sum)) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}
