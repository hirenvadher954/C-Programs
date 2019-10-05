// To check wheather number is Armstrong number or Not
#include <stdio.h>
#include<math.h>

int main()
{
    int number,extractDigit,sum = 0,numberofPower = 0;
    printf("Enter Any Number:- ");
    scanf("%d",&number);
    
    int orignalNumber = number;
    
    while(number!=0){
        number = number/10;
        numberofPower = numberofPower+1 ;
    }
    number = orignalNumber;
    while(number!=0){
        extractDigit = number%10;
        sum = sum + pow(extractDigit,numberofPower);
        number = number/10;
       }
    
    if(orignalNumber == sum)
        printf("Armstrong number");
    else
        printf("Not Armstrong number");
    
}
