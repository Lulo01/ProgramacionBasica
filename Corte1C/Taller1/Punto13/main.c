#include <stdio.h>

int main() {
    float n, suma = 0;
    int cont = 0;

    printf("Calculadora de promedio\n");
    printf("Ingrese numeros (negativo al final):\n");

    while (1) {
        printf("Valor: ");
        scanf("%f", &n);
        
		suma += n;
        cont++;
        printf("Aceptado: %.2f\n", n);
        
        if (n < 0) break;
        
        
    }

    printf("\nResultados:\n");
    printf("Total valores: %d\n", cont);
    printf("Suma: %.2f\n", suma);
    
    if (cont > 0) {
        printf("Promedio: %.2f\n", suma / cont);
    } else {
        printf("No hay datos\n");
    }

    return 0;
}

