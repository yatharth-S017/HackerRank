#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int angle;
    scanf("%d",&angle);
    
    if(angle>360 && angle%360 != 0 ){
         angle =  angle%360;  
        //angle = (angle % 360 + 360) % 360;
    }
    
    
    
    if(angle==360 || angle%360==0 && angle !=0){
        printf("Full Rotation");
    }
    else if(angle>180){
        printf("Reflex Angle");
    }
    else if(angle== 180){
        printf("Straight Angle");
    }
    else if(angle>90){
        printf("Obtuse Angle");
    }
    else if(angle== 90){
        printf("Right Angle");
    }
    else if(angle>=0){
        printf("Acute Angle");
    }
    return 0;
}
