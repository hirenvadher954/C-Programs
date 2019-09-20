
#include <stdio.h>
int main()
{
    int number1,number2,gcd;
    printf("Enter Number1 and Number2 = ");
    scanf("%d %d",&number1,&number2);
    
    for(int i = 1 ; i<number1/2&&i<=number2/2;i++){
        if(number1%i==0 && number2%i==0){
            gcd = i;
        }
    }
    
    printf("GCD is %d",gcd);

    return 0;
}
