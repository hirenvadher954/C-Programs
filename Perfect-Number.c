// To check wheather number is Perfect or Not
#include <stdio.h>

int main()
{
    int number,sum = 0;;
    printf("Enter Any Number:- ");
    scanf("%d",&number);
    
    for(int i = 1;i<=number/2;i++){
        if(number%i == 0){
            sum = sum + i;
        }
    }
    if(sum == number){
        printf("Perfect Number");
    }else{
        printf("Not Perfect Number");
    }
    return 0;
}
