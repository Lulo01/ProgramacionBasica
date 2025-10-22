#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M, seguir, i, pares_encontrados, contador;
    seguir = 1;

    while (seguir == 1) {
        
        printf("=== Buscador de Tres Numeros Pares ===\n\n");
        printf("Ingrese el primer numero (N): ");
        scanf("%d", &N);
        printf("Ingrese el segundo numero (M): ");
        scanf("%d", &M);
        
        // Validar que N sea mayor que M
        if (N <= M) {
            printf("\nError: El primer numero debe ser mayor que el segundo.\n");
            printf("Por favor ingrese los valores nuevamente.\n\n");
            continue;
        }
        
        printf("\nBuscando tres numeros pares entre %d y %d...\n", N, M);
        
        pares_encontrados = 0;
        contador = 0;
        
        // Buscar números pares desde N hacia M
        for (i = N; i >= M && contador < 3; i--) {
            if (i % 2 == 0) {
                pares_encontrados++;
                contador++;
                printf("Par encontrado #%d: %d\n", contador, i);
            }
        }
        
        // Mostrar resultado final
        if (pares_encontrados >= 3) {
            printf("\n¡Se encontraron tres numeros pares!\n");
        } else {
            printf("\nNo hay tres numeros pares entre los valores ingresados.\n");
            printf("Solo se encontraron %d numero(s) par(es).\n", pares_encontrados);
        }
        
        printf("\nDeseas buscar otros numeros? (1.SI 2.NO): ");
        scanf("%d", &seguir);
        system("cls");
    }

    if (seguir == 2) {
        system("cls");
        printf("\n\nGracias por usar nuestro buscador de numeros pares!\n\n");
    }
    
    return 0;
}
