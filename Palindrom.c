// To check wheather number is Palindrom or Not
#include <stdio.h>

int main()
{
    int number,lastDigit,reverseNumber = 0;
    printf("Enter Any Number:- ");
    scanf("%d",&number);
    
    int orignalNumber = number;
    
    while(number!=0){
        lastDigit = number % 10;
        reverseNumber = reverseNumber*10+ lastDigit;
        number = number/10;
    }
    
    if(reverseNumber == orignalNumber){
        printf("Palindrom");
    }else{
        printf("Not Palindrom");
    }
    return 0;
}
