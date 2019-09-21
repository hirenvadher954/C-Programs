#include <stdio.h>
#include <limits.h>

int main(void){
    int size,l,sl;
    printf("Enter Array Size = ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Array You just entered \n");
    for(int i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
    
    l = INT_MIN;
    sl = INT_MIN;
    
    for(int i=0;i<size;i++){
        if(a[i]>l){
            sl = l;
            l = a[i];
        }else if(sl<a[i] && a[i]!=l){
            sl = a[i];
        }
    }
      printf("Largest is %d and Second Largest is %d",l,sl);

    return 0;
}
