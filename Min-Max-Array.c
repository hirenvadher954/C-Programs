#include<stdio.h>


int main(void){
    int size;
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
    
    int max = a[0];
    int min = a[0];
    
    for(int i=0;i<size;i++){
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    }
    
    printf("Largest = %d and Smallest = %d",max,min);
    
    return 0;
}
