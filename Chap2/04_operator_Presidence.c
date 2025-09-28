//Operator Presidence
// 1st-  *,/,%
//2nd- +,-
//3rd- =

//Left to right associativity will be followerd between *,/ and %
//Left to right associativity will be followerd between + and -
//right to left associativity will be followerd for =
#include<stdio.h>

int main(){
    int a=3;
    int b=6;
    int c=9;

    printf("The value of %d",a%b*c);
    
    return 0;

}