// C Program to Find the Largest Number Among Three Numbers
#include<stdio.h>

int main(){

	// declare a, b, c, largest variables
	int a, b, c, largest;

	// User input
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);

	// if a is greater than both b and c, a is the largest
	if (a>=b && a>=c)
		largest = a;
	
	// if b is greater than both a and c, b is the largest
	else if (b>=a && b>=c)
		largest = b;

	// if both above conditions are false, c is the largest
	else
		largest = c;

	// print the result
	printf("The largest number is %d\n", largest);
	return 0;
}
