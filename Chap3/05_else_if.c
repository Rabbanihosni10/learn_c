#include<stdio.h>

int main(){

    int age=35;

    if(age>18){
        printf("You are eligible for voting\n");
    }
    else if(age==18){
        printf("You are just eligible for voting\n");
    }
    else{
        printf("You are not eligible for voting\n");
    }
    return 0;

}