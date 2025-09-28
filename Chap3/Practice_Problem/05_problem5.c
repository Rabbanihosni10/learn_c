#include<stdio.h>

int main(){
    char ch;
    ch='a';
    printf("The character is %c\n",ch);
    printf("The ASCII value of the character is %d\n",ch);
    if (ch>=97 && ch<=122){
        printf("The character is a lowercase letter\n");
    }
    else if(ch>=65 && ch<=90){
        printf("The character is an uppercase letter\n");
    }
    else if(ch>=48 && ch<=57){
        printf("The character is a digit\n");
    }
    else{
        printf("The character is a special character\n");
    }
    return 0;

}