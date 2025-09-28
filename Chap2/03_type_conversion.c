//Type Conversion in C

#include<stdio.h>

int main(){
    float a=9;
    int b=2;
    float c=a/b;   //int /int = int as rules of c
    int k=5;
    int l= b/k;   // type demotion will be happend the answer will be 0
    printf("The value of l is %d\n",l);
    printf("The value of a/b is %.1f\n",c);
    return 0;
}
