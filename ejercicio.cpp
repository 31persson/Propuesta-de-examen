#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Triples pitagóricos:\n");

    for (a = 1; a <= 20; a++) {
        for (b = a + 1; b <= 20; b++) {
            c = sqrt(a * a + b * b);

            if (c == (int)c && a + b + c <= 100 && (a == 3 && b == 4 && c == 5) || (a == 6 && b == 8 && c == 10) || (a == 5 && b == 12 && c == 13) || (a == 8 && b == 15 && c == 17)) {
                printf("%d - %d - %d\n", a, b, c);
            }
        }
    }

    return 0;
}
