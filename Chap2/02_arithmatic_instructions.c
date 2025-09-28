// +, -, *, /, %, =

#include<stdio.h>

int main(){
    int a=3;
    int b=2;
    int c=a+b;
    printf("The value of a is %d\nThe value of b is %d\nThe Value of c is %d\n",a,b,c);
    //Modulus operator is used to get the remainder
    int d=b%a;
    printf("The Value of d is %d\n",d);
    return 0;
    //This doesnot work for exponentiation in C
    //int d=a^b;
        
}
