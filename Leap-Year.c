//Leap Year
#include <stdio.h>

int main()
{
    int number;
    printf("Enter Year = ");
    scanf("%d",&number);
    
    if(((number%4 == 0) && (number%100 != 0)) || number%400 == 0){
        printf("Leap Year");
    }else{
        printf("Not Leap Year");
    }
    return 0;
}
