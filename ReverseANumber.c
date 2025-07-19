#include <stdio.h>

int reverseAnum(){
    int num = 126811;
    int a = 0;
    int rev = 0;
    int temp = num;
    while(temp){
        a = temp%10;
        rev = rev*10 +a;
        temp = temp/10;
    }
    printf("%d is the reverse of %d", rev, num);
    return 0;
}