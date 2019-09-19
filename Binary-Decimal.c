//Binary to Decimal
#include <stdio.h>
#include<math.h>

int main()
{
    int number;
    printf("Enter number = ");
    scanf("%d",&number);
    
    int bintoDec(int number){
        int i=0,lastDigit,decimal = 0;
        while(number!=0){
            lastDigit = number % 10;
            decimal = decimal + lastDigit*pow(2,i);
            i++;
            number = number/10;
        }
        return decimal;
    }
    
    printf("Decimal of %d is %d",number,bintoDec(number));

    return 0;
}
