#include <stdio.h>

int nOfOccurance(){
    int arr[12] = {12, 9, 1, 9, 23, 3, 28, 32,29, 9,29, 2};
    int key = 9;
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("size: %d\n", size);
    
    int occurance = 0;
    for (int i = 0; i< size; i++){
        if(arr[i] == key)
            occurance++;
    }
    
    printf("%d is the number of occurance", occurance);
}