#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Triples pitagóricos:\n");

    for (a = 1; a <= 20; a++) { // Limitamos el rango para mejorar la eficiencia
        for (b = a + 1; b <= 20; b++) {
            c = sqrt(a * a + b * b);

            if (c == (int)c && a + b + c <= 100) { // Verificar si c es un número entero y cumple con las condiciones de un triángulo
                printf("%d - %d - %d\n", a, b, c);
            }
        }
    }

    return 0;
}
