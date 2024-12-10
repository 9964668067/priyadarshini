#include<stdio.h>
int main(){
    char inputChar;
    printf("enter a character: \n");
    scanf("%c",&inputChar); 
    if(inputChar>=65&&inputChar<=90){
        printf("the given character is upper");
    }
    else{
         printf("the given character is lower");
    }
    return 0;
}

    
