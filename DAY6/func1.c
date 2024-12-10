#include<stdio.h>
// function dec
int sum(int a, int b);
int main(){
    int a=10,b=10,res;
    res=sum(a,b);
    printf("the sum of %d and %d is %d",a,b,res);
    res=sum(30,90);
    printf("the sum of %d and %d is %d \n",res);
    res=sum(65,99);
    printf("the sum of %d and %d is %d \n",res);
    return 0;
}

//function definition
int sum(int a, int b){   
    int res=a+b;
    return res;
}
