#include <stdio.h>
#include <math.h>


    int iscatB(int n){
        int prime[]= {2,3,5,7,11};
        for(int i=0; i<5; i++){
            for(int j=i+1; j<5; j++){
                if(n == prime[i] * prime[j]){
                    return 1; // true
                }
            }
        }
        return 0;
    }

int main() {

    int n;
    scanf("%d",&n);
    
    int sqrtn = (int)sqrt(n);
    
    
    if(n%2==0 && n%3==0 && n%5!=0)
    {
        printf("A");
    }
   else if(n>20 && iscatB(n)){
        printf("B");
        
    }
   
   else if(n>=10 && n<=99 && ((n%3==0 && n%7!=0) || (n%7==0 && n%3!=0) ))
    {
        printf("C");
    }
    
   else if (sqrtn*sqrtn == n && n<200)
    {
        printf("D");
    }
    else
    {
        printf("E");
    }
    return 0;
}