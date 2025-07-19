#include <stdio.h>

int FindLarge(){
    int arr[12] = {12, 22, 1, 78, 23, 43, 28, 32,9, 19,29, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("size: %d\n", size);
    
    int largest = arr[0];
    for (int i = 0; i< size; i++){
        if(arr[i]>largest)
            largest = arr[i];
    }
    
    printf("%d is the largest number", largest);
}