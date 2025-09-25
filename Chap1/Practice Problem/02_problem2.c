#include<stdio.h>

int main(){

    int redius;
    scanf("%d",&redius);
    float pi=3.1416;
    float area_of_circle=pi*(redius*redius);
    printf("The area of the circle is %.2f\n",area_of_circle);
    int height;
    scanf("%d",&height);
    float cilinder_volume=pi*(redius*redius)*height;
    printf("The volume of the colinder is %.2f",cilinder_volume);
    return 0;


}