#include <stdio.h>

int main() {

   int age;
    int income;
    int risk;
    scanf("%d %d %d", &age, &income, &risk);
    
        
    
     if(age>50)
    {   
        //hr
        if(income>75000 && risk==3){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");    
        }
          
        else if(income<=75000 || risk<=2){
        printf("Low Risk Portfolio: Suitable for conservative investments.");
        }
        
    } 
    
    
    else if(age<30){
        
           printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance."); 
        
        
            }
    
    else if(income<=30000 && (risk==1 || risk==2)){
    printf("Low Risk Portfolio: Suitable for conservative investments.");
   }   
    
    
        
        else if(age>=30 && age<=50)
        {
        
            //hr
            if(income>75000 && risk==3){
            printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            }
            
            //mr
            else if(income<=75000 && risk==2){
            printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
            }
                   
            //mr
           else if(income>75000 && (risk==1 || risk==2)){
            printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
           }
            
            
        }
    
    
      
        
  


    
    return 0;
}