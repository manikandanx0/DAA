#include <stdio.h>

int palindromeCheck(){
    char name[20] = "racecar";
    
    int i = 0;
    while(name[i]!='\0'){
        i++;
    }
    char rev[i];
    for(int j = 0; j < i; j++){
        rev[j] = name[i-j-1];
    }
    int flag = 1;
    for(int j = 0; j< i; j++){
        if(name[j]!=rev[j])
            flag = 0;
    }
    if(flag){
        printf("%s is a palindrome\n", name);
    }else{
        printf("%s is not a palindrome\n", name);
    }
}