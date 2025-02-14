#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int a,b,c,d;
    
    int a1, a2, a3, a4;
    
    //equilateral 
    if(n==3){  
        scanf("%d %d %d", &a, &b, &c);
        scanf("%d %d %d", &a1, &a2, &a3);
        
        if(a<=0 || b<=0 || c<=0 || (a1+a2+a3!=180) || !(a+b>c && b+c>a && a+c>b) || a1>90 || a2>90 || a3>90 || a1<=0 || a2<=0 || a3<=0){
            printf("Invalid Figure");
        }
        
        else if((a==b && b==c && c==a) && (a1==60 && a2==60 && a3==60)){
            printf("Equilateral Triangle");
       }
        
         else if((a==b && a1==a2 && b!=c && a2!=a3) || (b==c && a2==a3 && a!=c && a3!=a1) || (c==a && a3==a1 && a!=b && a2!=a1) ){
            printf("Isosceles Triangle");
        }

        
        else if(a!=b && b!=c && c!=a && a1!=a2 && a2!=a3 && a3!=a1){
            printf("Scalene Triangle");
        }
        else{
            printf("Invalid Figure");
        }
        
    }
    
    
    else if(n==4){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        scanf("%d %d %d %d", &a1, &a2, &a3,&a4);
        
        if(a<=0 || b<=0 ||c<=0 ||d<=0 || (a1+a2+a3+a4!=360) || a1>=180 || a2>=180 || a3>=180 || a4>=180  || a1<=0 || a2<=0 || a3<=0 || a4<=0){
            printf("Invalid Figure");
        }
        
       else if(a==b && b==c && c==d && d==a && a1==90 && a2==90 && a3==90 && a4==90){
            printf("Square");
        }
        
        else if(a==c && b==d && a1==90 && a2==90 && a3==90 && a4==90){
            printf("Rectangle");
        }
        
        else if(a==b && b==c && c==d && d==a && a1==a3 && a2==a4 && a1 != 90) {
            printf("Rhombus");
          }
         else if(a==c && b==d && a1==a3 && a2==a4 ){
                printf("Parallelogram");
          }
        else{
            printf("Invalid Figure");
        }
    }
    
    else if(n==0){
            printf("Circle");
    }
    else{
        printf("Invalid Figure");
    }
    
    
    return 0;
}