
#include <stdio.h>
int main()
{
   
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d",1);
        }
        printf("\n");
    }
    
    int k=1;
    for(int i=10;i>0;i=i-2){
        for(int j=i;j>0;j--){
            printf(" ");
        }
        for(int m=k;m>0;m--){
            printf("%d ",1);
        }
        k=k+2;
        printf("\n");
    }
    
    return 0;
}

