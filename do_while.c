// Write a C program that can display the multiplication table of a given integer from the user
#include<stdio.h>

int main() {
  // declare n, i, product variables
  // n = the number we'll be inputting
  // i = dummy variable to keep track of iteration number
  int n, i, product;

  // User Input
  printf("Enter an integer: ");
  scanf("%d", &n);

  // starting value
  i = 1;

  do {
    // calculate product of n and i
    product = n * i;
    // 1st %d is for n
    // 2nd %d is for i
    // 3rd %d is for product
    printf("%d x %d = %d\n", n, i, product);
    // i++ means increment by 1 (i = i + 1 or i += 1)
    i++;
  // loop until i is equal to 10
  } while(i <= 10);
  return 0;
}
