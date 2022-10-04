#include<stdio.h>

int main(){
	int a, b, c, biggest;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);

	if (a>b && a>c)
		biggest = a;
	else if (b>a && b>c)
		biggest = b;
	else
		biggest = c;

	printf("The biggest number is %d\n", biggest);
	return 0;
}
