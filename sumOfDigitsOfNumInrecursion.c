#include <stdio.h>

int sumOfDigits(int num, int sum){
    if (num==0)
        {
            printf("num: %d, sum: %d\n", num, sum);
            return sum;
        }
    else
        {
            printf("num: %d, sum: %d\n", num, sum);
            return sumOfDigits(num/10, sum+num%10);
        }
}

int main(){
    printf("%d", sumOfDigits(1221221, 0));
    return 0;
}