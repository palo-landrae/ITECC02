#include <stdio.h>

int main() {
    int i, j;
    
    for(i=4; i>0; i--) {
        for(j=1; j<=4; j++) {
            if(j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf ("\n");   
    }  
    return 0;
}