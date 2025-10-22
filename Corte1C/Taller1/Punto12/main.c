#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int numero, seguir;
    int i;  
    seguir= 1;

while (seguir==1){
	
    printf("===Tablas de multiplicar===\n\n");
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    printf("\nTabla de multiplicar del %d \n", numero);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n\n", numero, i, numero * i);
    }
    
    printf("Desea digitar otro numero? (1.SI 2.NO): ");
        scanf("%d", &seguir);
        
        system ("cls");
}
    if(seguir==2) {
    	system("cls");
    	printf ("\nGracias por utilizar nuestro programa c:\n");
	}

    return 0;
}
