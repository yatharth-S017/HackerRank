#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int count=0;
    int ans;
    for(int i=1; i<=32; i++){
        
        if((n&1)==0){
        n=n>>1;
        count++;
    }else if((n&1)==1){
        n=n&1;
        ans= n<<(count);
        printf("%d",ans);
        return 0;
    }
        
}
    
    
    return 0;
}