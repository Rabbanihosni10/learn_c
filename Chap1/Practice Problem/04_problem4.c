#include<stdio.h>

int main(){

    float simple_interest;
    float principal,rate,years;
    scanf("%f %f %f",&principal,&rate,&years);
    rate=rate/100;
    simple_interest=(principal*rate*years);
    printf("The simple interest is %.2f",simple_interest);
    return 0;

}