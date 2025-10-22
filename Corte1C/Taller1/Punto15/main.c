#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, seguir, i; 
    seguir = 1;

    while (seguir == 1) {
        
        printf("=== Verificador de Numeros Primos ===\n\n");
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        
        int es_primo = 1;
        
        if (numero <= 1) {
            es_primo = 0;
        } else {
            for (i = 2; i < numero; i++) {
                if (numero % i == 0) {
                    es_primo = 0;
                    break;
                }
            }
        }
        
        printf("\nEl numero %d ", numero);
        
        if (es_primo) {
            printf("es primo!\n\n");
            printf("Solo es divisible por 1 y por si mismo\t\n");
        } else {
            printf("no es primo!\n\n");
            printf("Tiene mas de dos divisores\t\n");
        }
        
        printf("\nDeseas comprobar otro numero? (1.SI 2.NO): ");
        scanf("%d", &seguir);
        system("cls");
    }

    if (seguir == 2) {
        system("cls");
        printf("\n\nGracias por usar nuestro verificador de numeros primos c:!\n\n");
    }
    
    return 0;
}
