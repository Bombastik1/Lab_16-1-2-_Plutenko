#include <stdio.h>
#include <stdlib.h>
#include <locale> 

int main() {
    setlocale(LC_ALL, "");
    int i, j;
    int a[4][4] = { 11, 12, 13, 14, 21, 22, 23, 24, 31, 32, 33, 34, 41, 42, 43, 44 };

    printf("Матриця:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }

    int s = 0;
    int d = 1;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < i; j++) {
            s += a[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        int m = a[i][0];
        for (int j = 0; j < 4; j++) {
            if (a[i][j] > m) {
                m = a[i][j];
            }
        }
        d *= m;
    }

    printf("Сума елементiв вище головної дiагоналi: %d\n", s);
    printf("\nДобуток максимальних елементiв кожного рядка: %d\n", d);

    return 0;
}