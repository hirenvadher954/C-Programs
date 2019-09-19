//Decimal to Binary
#include <stdio.h>

int main()
{
    int number;
    printf("Enter number = ");
    scanf("%d",&number);
    
    int dectoBin(int number){
        int rem,binary=0,i=1;
        while(number!=0){
            rem = number % 2;
            number = number/2;
            binary = binary + rem*i;
            i=i*10;
        }
        return binary;
    }
    
    printf("Binary of %d is %d",number,dectoBin(number));

    return 0;
}
