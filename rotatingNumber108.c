
#include <stdio.h>
#include <stdbool.h>
#include <math.h>


_Bool isprime(int);
_Bool ispalindrome(int);
int countdigit(int);
int reverse(int);
int numReverse(int);

_Bool isprime(int a){
    if(a<2) return false;
    if(a==2) return true;
    
    for(int i=2; i<=sqrt(a); i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}



_Bool ispalindrome(int n){
    int x = n;
    
    int final = 0;
    while(n>0){
        int rem= n%10;
        final = final *10 + rem;
        n=n/10;
    }
    
    if(x == final){
        return true;
    }else{
        return false;
    }
}


int countdigit(int n){
    int count = 0;
    while(n>0){
        n = n/10;
        count++;
    }
    return count;
}


int reverse(int n){
    int final = 0;
    while(n>0){
        int rem= n%10;
        final = final*10 + rem;
        n= n/10;
    }
    return final;
}


int rightshift(int n){
    int y = countdigit(n);
    
    int i=1;
    //int final = 0;
    while(i<3){
        int rem = n%10;
        n = n/10;
        n= rem*pow(10,y-1) + n;
        i++;
    }
    return n;
    
}


int leftshift(int n){
    int y = countdigit(n);
    
    int div = pow(10, y-2);
    int firsttwo = n/div;
    int remaing = n %div;
    
    int final= remaing*100 + firsttwo;
    
    return final;
}


int oddchange(int n){
    int y = countdigit(n);
    
    int div = pow(10, y-1);
    int first = n/div;
    int remaing = n %div;
    
    int final= remaing*10 + first;
    
    return final;
}

int evenchange(int n){
    int y = countdigit(n);
    int i=1;
    while(i<2){
        int rem = n%10;
        n = n/10;
        n= rem*pow(10,y-1) + n;
        i++;
    }
    return n;
}


int main()
{
    int t;
    scanf("%d\n", &t);
    while(t>0){

        int n;
        scanf("%d\n", &n);
        int digit = countdigit(n);
    
        if(digit <=2  ){
            printf("%d\n",reverse(n));
        }
        else if(digit >=3){
            if(ispalindrome(n) && isprime(n)){
                printf("%d\n", n);
            }
            else if(ispalindrome(n)){
                int x= rightshift(n);
                printf("%d\n", x);
            }else if(isprime(n)){
                int h = leftshift(n);
                printf("%d\n", h);
            }
            else if(n%2==0){
                int x = evenchange(n);
                printf("%d\n", x);
            }
            else if(n%2 !=0){
                int x = oddchange(n);
                printf("%d\n", x);
            }
        }

       
        
        t--;
    }

    return 0;
}
