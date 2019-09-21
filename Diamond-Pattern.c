#include <stdio.h>
int main()
{
    int k=1;
    for(int i=10;i>0;i=i-2){
        for(int j=i;j>0;j--){
            printf(" ");
        }
        
        for(int j=k;j>0;j--){
            printf(" 1");
        }
        
        k=k+2;
        printf("\n");
    }
    k=7;
    for(int i=4;i<=10;i=i+2){
        for(int j=i;j>0;j--){
            printf(" ");
        }
        for(int j=k;j>0;j--){
            printf(" 1");
        }
        k=k-2;
        printf("\n");
    }

    return 0;
}
