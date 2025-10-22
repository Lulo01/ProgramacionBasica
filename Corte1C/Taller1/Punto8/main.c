#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int year, seguir;
	
	while (seguir==1) {
	 seguir= 1;
	printf("====Tu year es bisiesto o no?====\n\n");
	printf("Ingresa el year a calcular: ");
	    scanf("%d", &year);
     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
	 
      printf("El year %d es bisiesto.\n", year);
	    } 
	    
	else {
        printf("El year %d no es bisiesto.\n", year);
    }
    
    printf("\nDesea saber respecto a otro year? (1. SI 2. NO): ");
        scanf("%d", &seguir);
        system("cls");
}

    if (seguir==2);
    system("cls");
    printf("Gracias por ultilizar nuestro programa de years bisiestos c:");
    
	return 0;
}
