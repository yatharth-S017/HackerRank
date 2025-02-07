#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int path,left_path,left_second_path,puzzle,sequence,chest;
    
      scanf("%d",&path);
        if(path==1){
            printf("Player chooses the Left path.\n");
            scanf("%d",&left_path);
            if(left_path==1){
               printf("Poor choice, Game Over!\n"); 
            }
            else if(left_path==2){
                printf("Player found a bridge.\n");
                scanf("%d",&left_second_path);
                if(left_second_path==1){
                    printf("Player crosses the bridge safely.\n");
                    
                    scanf("%d",&chest);
                    if(chest==1){
                        printf("All that glitters is not gold, Game Over!\n");
                    }
                    else if(chest==2){
                        printf("All your efforts were for nothing, Game Over!\n");
                    }
                    else if(chest==3){
                        printf("Congratulations!! You won the treasure.\n");
                    }
                }
                else if(left_second_path==2){
                        printf("Poor luck, Game Over!\n");
                    }
            }
        }
        else if(path==2){
            printf("Player chooses the Middle path.\n");
            scanf("%d",&puzzle);
           if(puzzle==582){
               printf("Player solved the puzzle.\n");
              
                   scanf("%d",&chest);
                   if(chest==1){
                        printf("All that glitters is not gold, Game Over!\n");
                    }
                    else if(chest==2){
                        printf("All your efforts were for nothing, Game Over!\n");
                    }
                    else if(chest==3){
                        printf("Congratulations!! You won the treasure.\n");
                    }
               
           }
             else{
                   printf("Foolish player, Game Over!\n");
               }
        }
        else if(path==3){
            printf("Player chooses the Right path.\n");
                scanf("%d",&sequence);
                if(sequence==30)
                {
                    printf("Player solved the puzzle.\n");
                    
                    scanf("%d",&chest);
                     if(chest==1){
                        printf("All that glitters is not gold, Game Over!\n");
                    }
                    else if(chest==2){
                        printf("All your efforts were for nothing, Game Over!\n");
                    }
                    else if(chest==3){
                        printf("Congratulations!! You won the treasure.\n");
                    }
                }
                else{
                        printf("Foolish player, Game Over!\n");
                    }
}
            
        
    return 0;
}