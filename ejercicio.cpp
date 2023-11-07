#include <stdio.h>
#include <math.h>

int main() {
    printf("Triples pitagoricos que representan lados de un triangulo rectangulo:\n");

    for (int a = 1; a <= 20; a++) {
        for (int b = a + 1; b <= 20; b++) {
            int c = sqrt(a * a + b * b);
            if (c <= 20) {
                if (a * a + b * b == c * c) {
                    if ((a == 3 && b == 4 && c == 5) ||
                        (a == 6 && b == 8 && c == 10) ||
                        (a == 5 && b == 12 && c == 13) ||
                        (a == 8 && b == 15 && c == 17)) {
                        printf("- %d - %d - %d\n", a, b, c);
                    }
                }
            }
        }
    }

    return 0;
}
