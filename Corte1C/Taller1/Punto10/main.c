#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numrandom, intento;
    int contador;
    int seguir = 1;

    srand(time(NULL));

    printf("=== Akinator, adivina el numero! ===\n");

    while (seguir == 1) {

        numrandom = rand() % 10 + 1;
        contador = 0;

        do {
            printf("Ingrese un numero entre 1 y 10: ");
            scanf("%d", &intento);
            contador++;

            if (intento < numrandom) {
                printf("Es mas grande el numero.\n");
            } 
            else if (intento > numrandom) {
                printf("Es mas chico el numero.\n");
            } 
            else {
                printf("\nCorrecto! El numero era %d.\n", numrandom);

                if (contador == 1) { 
                    printf("Lo lograste en %d intento, Akinator está sorprendido!\n", contador);
                } 
                else if (contador == 2) {
                    printf("Fueron %d intentos, lo hiciste bien c:\n", contador);
                } 
                else {
                    printf("Uff, al fin lo lograste en %d intentos. Mejora para la proxima, Akinator se aburrio\n", contador);
                }
            }

        } while (intento != numrandom);

        printf("\nSelecciona una opcion (1. INTENTAR DE NUEVO / 2. RENDIRSE): ");
        scanf("%d", &seguir);

        if (seguir == 1) {
            system("cls");
            printf("=== Nueva partida, a ver si puedes vencer a Akinator! ===\n");
        } else {
            system("cls");
            printf("Gracias por intentarlo, mal ahi por rendirse. Nos veremos después c:!\n");
        }
    }

    return 0;
}

