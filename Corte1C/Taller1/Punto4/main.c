#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, seguir;
	 seguir=1;
	 
	while(seguir==1) {
		
		printf("====Programa para comparar 2 numeros==== \n");
		printf("Digite el primer numero: ");
             scanf("%d", &a);
        printf("Digite el segundo numero: ");
             scanf("%d", &b);
    if (a<b) {
    	printf("El mayor numero es %d\n", b);
    }
    else if (a>b) {
    	printf("\nEl mayor numero es %d\n", a);
	}
	else if (a==b) {
		printf("Los dos numeros son iguales\n");
	}
	
	printf("\n ===== ¿Deseas volver a comparar dos numeros? =====\n 1. SI\t 2. NO");
	 printf("\nDigite su respuesta aqui: ");
	scanf("%d", &seguir);
	    system("cls");		
	}
	if (seguir=2) {
	  system("cls");
		printf("Gracias por utilizar nuestro programa c: \n");
	}
	return 0;
}
