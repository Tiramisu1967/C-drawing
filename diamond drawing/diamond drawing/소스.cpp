#include <stdio.h>

int main() {
    while (true) {
        int a = 0;

        while ((a % 2) != 1) {
            scanf_s("%d", &a);
        }
        if (a == 1) {
            break;
        }
        int n1 = (a + 3) / 2 - 1;
        int n2 = a - (a - 1) / 2;
        //ÁÙ °¹¼ö
        for (int i = 1; i <= a; i++) {

            for (int j = 1; j <= a + 4; j++) {
                if (j == n1 || j == n2) {
                    printf("*");
                    if (j == n1) {
                        n1--;
                    }

                }
                printf(" ");


            }
            if (i > 1 && i < a - ((a - 1) / 2)) {
                n2++;
            }
            else if (i >= a - ((a - 1) / 2) && i < a - 1) {
                n2--;
                n1 += 2;
            }
            else if (i > a - 2 && i <= a) {
                n1 += 2;
            }
            printf("\n");
        }
    }
}