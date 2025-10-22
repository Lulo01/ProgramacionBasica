#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, positivos, negativos;
    int seguir;
    seguir = 1;

    while (seguir == 1) {
        
        printf("===Contador de Numeros Positivos y Negativos===\n\n");
        printf("Ingrese numeros (0 para terminar):\n\n");
        
        positivos = 0;
        negativos = 0;
        
        while (1) {
            printf("Numero: ");
            scanf("%d", &numero);
            
            if (numero == 0) {
                break;
            }
            else if (numero > 0) {
                positivos++;
                printf("Positivo registrado: %d\n", numero);
            }
            else {
                negativos++;
                printf("Negativo registrado: %d\n", numero);
            }
        }
        
        printf("\n--- Resultados ---\n");
        printf("Total de numeros positivos: %d\n", positivos);
        printf("Total de numeros negativos: %d\n", negativos);
        printf("Total general: %d\n", positivos + negativos);
        
        printf("\nDeseas realizar otro conteo? (1.SI 2.NO): ");
        scanf("%d", &seguir);
        system("cls");
    }

    if (seguir == 2) {
        system("cls");
        printf("\n\nGracias por usar nuestro contador de postivos y negativos c:!\n\n");
    }
    
    return 0;
}
