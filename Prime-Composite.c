// To check wheather number is Prime or Composite
#include <stdio.h>

int main() {
  int number, notPrime = 0;
  printf("Enter Any Number:- ");

  scanf("%d", & number);

  for (int i = 2; i < sqrt(number) / 2; i++) {   //you can use n/2 also instead of sqrt(number)/2
    if (number % i == 0) {
      notPrime = 1;
      break;
    }
  }
  if (number == 0) {
    printf("Neither Prime nor Composite");

  } else if (notPrime == 1) {
    printf("Composite");
  } else {
    printf("Prime Number");
  }

  return 0;
}
