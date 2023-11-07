#include <stdio.h>
#include <math.h>

int main() {
    printf("Triples pitagóricos que representan lados de un triángulo rectángulo:\n");

    int triples[4][3] = {
            {3, 4, 5},
            {6, 8, 10},
            {5, 12, 13},
            {8, 15, 17}
    };

    for (int i = 0; i < 4; i++) {
        int a = triples[i][0];
        int b = triples[i][1];
        int c = triples[i][2];

        if (a * a + b * b == c * c) {
            printf("- %d - %d - %d\n", a, b, c);
        }
    }

    return 0;
}
