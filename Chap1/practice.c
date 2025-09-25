#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    float b;
    scanf("%f",&b);
    float mul=a*b;
    printf("The Multimlication of %d and %.2f is %.2f",a,b,mul);
    // scanf("The value of the currency is %f",&b);
    // printf("%d"*"%f",a,b);
    return 0;
}