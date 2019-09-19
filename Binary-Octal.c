#include <stdio.h>
#include<math.h>

int main()
{
    int number;
    printf("Enter number = ");
    scanf("%d",&number);
    
    int bintoDec(int n){
        int lastDigit,decimal = 0,i =0;
        while(n!=0){
            lastDigit = n % 10;
            decimal = decimal + lastDigit*pow(2,i);
            i++;
            n = n/10;
        }
        return decimal;
    }
    
    int bintoOctal(int number){
        int i=1,lastDigit,octal = 0,convertedNumber;
        while(number!=0){
            lastDigit = number % 1000;
            convertedNumber = bintoDec(lastDigit);
            octal = octal + convertedNumber*i;
            i = i*10;
            number = number/1000;
        }
        return octal;
    }
    
    printf("Octal of %d is %d",number,bintoOctal(number));

    return 0;
}
