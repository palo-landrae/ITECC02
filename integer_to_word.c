#include <stdio.h>
#include <math.h>

int main() {
    int n, first, a = 0, i = 0;
    printf("Enter an integer: ");
    scanf("%d", & n);

    while (n != 0) {
        first = n;
        i = 0;
        while (first >= 10) {
            first /= 10;
            i++;
        }
        //printf("i = %d\n", i);
        //printf("first = %d\n", first);
        a = first * pow(10, i);
        //printf("%d\n", a);

        if (i != 1 && i != 4 && i != 7) {
            switch (first) {
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
            }
            switch (i) {
            case 2: 
            case 5:
            case 8:
                printf("hundred ");
                break;
            case 3:
                printf("thousand ");
                break;
            case 6:
                printf("million ");
                break;
            case 9:
                printf("billion ");
                break;
            }
        } else if (first != 1) {
            switch (first) {
            case 2:
                printf("twenty ");
                break;
            case 3:
                printf("thirty ");
                break;
            case 4:
                printf("forty ");
                break;
            case 5:
                printf("fifty ");
                break;
            case 6:
                printf("sixty ");
                break;
            case 7:
                printf("seventy ");
                break;
            case 8:
                printf("eighty ");
                break;
            case 9:
                printf("ninety ");
                break;
            }
        } else if (i == 1 && first == 1) {
            switch (n) {
            case 10:
                printf("ten");
                break;
            case 11:
                printf("eleven");
                break;
            case 12:
                printf("twelve");
                break;
            case 13:
                printf("thirteen");
                break;
            case 14:
                printf("forteen");
                break;
            case 15:
                printf("fifteen");
                break;
            case 16:
                printf("sixteen");
                break;
            case 17:
                printf("seventeen");
                break;
            case 18:
                printf("eighteen");
                break;
            case 19:
                printf("nineteen");
                break;
            }
            return 0;
        }
        //printf("\n");
        n -= a;
    }
    return 0;
}