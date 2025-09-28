#include<stdio.h>

int main(){

    float a;
    printf("Enter your income:");
    scanf("%f",&a);
    if(a>10.0){
        float tax=((float)30*a)/100;
        printf("Your tax is %.2f\n",tax);
    }
    else if(a<=10.0 || a>=5.0){
        float tax=((float)20*a)/100;
        printf("Your tax is %.2f\n",tax);        
    }
    else if(a<5.0 || a>=2.5){
        float tax=((float)5*a)/100;
        printf("Your tax is %.2f\n",tax);
    }
    else{
        printf("There is no Tax for You!\n Thank you!");
    }
    return 0;

}