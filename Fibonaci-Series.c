#include <stdio.h>


int main()
{
    int first=0,second=1,third,number;
    printf("Enter Any Number:- ");
    scanf("%d",&number);
    
    for(int i=0;i<number;i++){
        printf("%d \t",first);
        third = first + second;
        first = second;
        second = third;
    }
    
    return 0;
}
