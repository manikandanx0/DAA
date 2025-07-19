#include <stdio.h>
int productRec(int x, int y){
    if(y!=0)
        return (x + productRec(x, y-1));
    else
        return 0;
        
}
int main1(){
    int a = 23;
    int b = 31;
    
    printf("%d\t", productRec(b,a));    
    printf("%d", a*b);
}

