#include <stdio.h>

int main() {
    int i, j, n1, n2, n3, n4, spaceCount, counter = 0;
    
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);
    printf("Enter n3: ");
    scanf("%d", &n3);
    printf("Enter n4: ");
    scanf("%d", &n4);
    
    if (n1<n3 || n2<=0 || n3<=0 || n4<=0)
        return 0;
    
    // 1
    for(i=0; i<n1; i++) {
        if (i!=n1-1)
            printf("# ");
        else
            printf("#\n");
    }
    
    //2
    for(i=0; i<n2; i++) {
        for(j=0; j<n1*2+i-1; j++)
            printf(" ");
            spaceCount=j;
        printf("\\\n");
    }
    
    //3
    for(i=0; i<n3; i++) {
        for(j=spaceCount; j>0+counter; j--)
            printf(" ");
        if (i!=n3-1)
            printf("/\n");
        else
            printf("/");
        counter++;
    }
    
    //4
    for(i=0; i<n4; i++) {
        printf("_");
    }
    return 0;
}