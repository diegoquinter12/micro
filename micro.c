#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
     printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    // Suma
    printf("Suma: %d\n", a + b);

      // Resta
    printf("Resta: %d\n", a - b);

    // Multiplicación
    printf("Multiplicacion: %d\n", a * b);

    // División
    if (b != 0)
        printf("Division: %.2f\n", (float)a / b);
    else
        printf("Division: No se puede dividir entre 0\n");

    // Potencia
    printf("Potencia: %.2f\n", pow(a, b));

    // Residuo
    if (b != 0)
        printf("Residuo: %d\n", a % b);
    else
        printf("Residuo: No se puede calcular\n");

    // Comparación
    if (a > b)
        printf("%d es mayor que %d\n", a, b);
    else if (a == b)
        printf("%d es igual a %d\n", a, b);
    else
        printf("%d es menor que %d\n", a, b);    

      return 0;
}