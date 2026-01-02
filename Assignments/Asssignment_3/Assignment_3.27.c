#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 7; i++) {

        
        for (j = 0; j < 5; j++) {
            if (j == 0 || j == 4 - i || j == i - 2)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        
        for (j = 0; j < 5; j++) {
            if ((i == 0 || i == 6) && j > 0 && j < 4)
                printf("*");
            else if ((j == 0 || j == 4) && i > 0 && i < 6)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

       
        for (j = 0; j < 5; j++) {
            if (j == 0 || j == 4 || (i == j && i < 3) || (i + j == 4 && i < 3))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        
        for (j = 0; j < 5; j++) {
            if ((i == 0 && j > 0 && j < 4) ||
                ((j == 0 || j == 4) && i > 0) ||
                (i == 3))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        
        for (j = 0; j < 5; j++) {
            if (j == 0 || i == 6)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
