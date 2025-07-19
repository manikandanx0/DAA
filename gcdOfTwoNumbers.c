#include <stdio.h>

int gcd(int a, int b){
    if(a<b)
        return gcd(b,a);
    else if(b==0)
        return a;
    else{
        int r = a%b;
        return gcd(b, r);
    }
}

int main2(){
    printf("GCD, %d", gcd(270,192));
}