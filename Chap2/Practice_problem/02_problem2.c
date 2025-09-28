#include<stdio.h>

int main(){

    // What data type will 3.0/8 – 2 return?
    float a=3.0;
    int b=8;
    int c=2;
    float d=a/b-c;
    int f=a/b-c;
    printf("The value of d is %.2f\n",d);
    printf("The value of f is %d\n",f);
    printf("Type of d is %zu\n",sizeof(d));
    printf("Type of f is %zu\n",sizeof(f));
    return 0;

}