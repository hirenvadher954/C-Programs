#include <stdio.h>


int main()
{
    int number1,number2;
    printf("Enter Number1 && number2:- ");
    scanf("%d %d",&number1,&number2);
    
    number1 = number1^number2;
    number2 = number1^number2;
    number1 = number1^number2;
    
    printf("After Swapping %d %d",number1,number2);
    
    return 0;
}
