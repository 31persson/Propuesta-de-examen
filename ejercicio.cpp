#include <stdio.h>

int main() {
    printf("Triples pitagóricos que representan lados de un triángulo rectángulo:\n");

    for (int a = 1; a <= 20; a++) {
        for (int b = a + 1; b <= 20; b++) {
            for (int c = b + 1; c <= 20; c++) {
                if (a * a + b * b == c * c) {
                    printf("- %d - %d - %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
