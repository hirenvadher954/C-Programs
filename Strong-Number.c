// To check wheather number is Strong number or Not
#include <stdio.h>


int main()
{
    int number,lastDigit,sum=0,orignalNum;
    printf("Enter Any Number:- ");
    scanf("%d",&number);
    orignalNum = number;
    int fact(int n){
        if(n==1)
            return 1;
        else
            return n*fact(n-1);
    }
    
   while(number!=0){
       lastDigit = number%10;
       sum = sum + fact(lastDigit);
       number = number/10;
       }
   
   if(orignalNum == sum)
        printf("Strong Number");
    else
        printf("Not Strong Number");
}
