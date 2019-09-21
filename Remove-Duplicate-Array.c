#include <stdio.h>
 
int main()
{
  int n,  b[100], count = 0,k;
 
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  int a[n];
  printf("Enter %d integers\n", n);
 
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
 
  for (int i = 0; i < n; i++){
    for ( k = 0; k < count; k++){
      if(a[i] == b[k])
        break;
    }
    if (k == count)
    {
      b[count] = a[i];
      count++;
    }
  }
 
  printf("Array obtained after removing duplicate elements:\n");
 
  for (int i = 0; i < count; i++)
    printf("%d\t", b[i]);
 
  return 0;
}
