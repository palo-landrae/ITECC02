#include <stdio.h>

int main() {
    int i, j, n;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
  
    for(i=n; i>0; i--) {
        for(j=0; j<i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}