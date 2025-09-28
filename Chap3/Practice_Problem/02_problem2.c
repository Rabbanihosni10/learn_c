#include<stdio.h>

int main(){
    int a,b,c;
    printf("Subject one:\n");
    scanf("%d",&a);
    printf("Subject two: \n");
    scanf("%d",&b);
    printf("Subject three: \n");
    scanf("%d",&c);
    int total_marks=300;
    int gained_marks=a+b+c;
    float parcentage=((float)gained_marks/total_marks)*100;
    if(parcentage>=40.0 && a>33 && b>33 && c>33){
        printf("Congratulations!\nYou are Passed\n");
    }
    else{
        printf("Sorry!\nYou Have Failed\nBetter Luck Next Time!\n");
    }
    return 0;

}