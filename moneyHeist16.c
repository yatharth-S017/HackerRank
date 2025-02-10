#include <stdio.h>

int main() {
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%d %d %d %d %d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    
    int index1, index2, index3;
    int x,y,z;
    
    scanf("%d %d",&index1,&x);
    scanf("%d %d",&index2,&y);
    scanf("%d %d",&index3,&z);
    
    
    int arr[] = {a,b,c,d,e,f,g,h,i,j};
    for(int i=0; i<=9; i++){
        
        
         if(i==index1){
            if(arr[i]+x > 9){
                printf("%d ",(arr[i]+x)-10);
            }
            else{
                printf("%d ",arr[i]+x);
            }
        }
        
        else if(i==index2){
            if(arr[i]+y > 9){
                printf("%d ",(arr[i]+y)-10);
            }
            else{
                printf("%d ",arr[i]+y);
            }
        }
        
        else if(i==index3){
            if(arr[i]+z > 9){
                printf("%d ",(arr[i]+z)-10);
            }
            else{
                printf("%d ",arr[i]+z);
            }
        }
        else{
            printf("%d ", arr[i]);
        }
        
        
    }
    
    
       
    return 0;
}