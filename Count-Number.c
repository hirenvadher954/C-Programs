#include <stdio.h>

int main()
{
    int number,lastDigit,total = 0;
    printf("Enter Any Number:- ");
    scanf("%d",&number);
 
    
   while(number!=0){
       number = number/10;
       total++;
       }
  printf("count = %d",total); 
  
}
