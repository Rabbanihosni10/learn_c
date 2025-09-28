#include<stdio.h>

int main(){
    int marks;
    printf("Enter Your Marks:");
    scanf("%d",&marks);
    int evaluate=marks/10;
    // printf("%d",evaluate);
    switch(evaluate){
        case 10:
        case 9:
            printf("Your Grade is A\n");
            break;
        case 8:
            printf("Your Grade is B\n");
            break;
        case 7:
            printf("Your Grade is C\n");
            break;
        case 6:
            printf("Your Grade is D\n");
            break;
        case 5:
            printf("Your Grade is E\n");
            break;
        default:
            printf("You have failed!\nYour Grade is F\n");
            break;

    }
    
    return 0;

}