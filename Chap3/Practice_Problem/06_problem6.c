#include<stdio.h>

int main(){

    int a=4, b=6,c=8,d=1;
    if (a>b && a>c && a>d){
        printf("A is the greatest\n");
    }
    else if(b>a && b>c && b>d){
        printf("B is the greatest\n");
    }
    else if(c>a && c>b && c>d){
        printf("C is the greatest\n");
    }
    else{
        printf("D is the greatest\n");
    }
    return 0;

}