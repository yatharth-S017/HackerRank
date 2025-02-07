#include <stdio.h>

int main() {

    int budget;
    int numGuests;
    int foodCostPerGuest;
    int decorationCost;
    int musicCost;
    int extraExpenses;
    // int celebration;
scanf("%d %d %d", &budget,&numGuests,&foodCostPerGuest);
scanf("%d %d %d",&decorationCost,&musicCost, &extraExpenses);
    
    
    int totalFcost = foodCostPerGuest*numGuests;
    int celebration = totalFcost + musicCost + decorationCost +extraExpenses;            
    // give value as 0-false or 1-true
    int decorationCondition = decorationCost < (budget * 0.3);
    int foodcondition = totalFcost < (budget *0.5);
    int musiccondition;
    if(numGuests>25){
        if(musicCost>0){
            musiccondition=1;
        }else{
            musiccondition=0;
        }
    }
    else{
        musiccondition=1;
    }
    
    if(numGuests <= 5 || numGuests >50){
        printf("Celebration Denied");
        return 0;
    }
    
    
    // main condition
    if(celebration <= budget && (decorationCondition || foodcondition)  
        && musiccondition){
        printf("Celebration Approved");
    }
    else{
        printf("Celebration Denied");
    }
    
    
    
    
    
    
//     if(numGuests > 5 && numGuests<=50){
//         int deco = budget*0.3;
//         int food =  budget * 0.5;
        
//         if(decorationCost < deco || totalFcost < food){
//             if(numGuests > 25){
//                 celebration = 
//                 if(budget >= celebration){
//                     printf("Celebration Approved");
//                 }
//                 else{
//                     printf("Celebration Denied");
//                 }
//             }
//             else{   // numgeust <25 --> musiccost-0
//                 celebration = foodCostPerGuest*numGuests + musicCost +
//                              decorationCost + extraExpenses;
//                 if(budget >= celebration){
//                     printf("Celebration Approved");
//                 }
//                 else{
//                     printf("Celebration Denied");
//                 }
//             }
//         }
//         else{
//             printf("Celebration Denied");
//         }
//     }
//     else{  // first if
//        printf("Celebration Denied"); 
//     }
    
    
    
    return 0;
}