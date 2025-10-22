#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float nota;
	char nombre [30], materia [30];
	
	printf("====System of Lulo's School====\n\n");
	printf("\tIngrese su nombre (SIN ESPACIOS): ");
	   scanf("%s", nombre);
	printf("\tIngresar nombre de la asignatura: ");
	   scanf("%s", materia);
	printf("\tIngrese su nota: ");
	   scanf("%f", &nota);
	
	 
	 printf("\n====Cargando nota====\n");
	 sleep(1);
	 printf(".\n");
	 sleep(1);
	 printf(".\n");
	 sleep(1);
	 printf(".\n");
	 
	 system ("cls");
	 
	 printf("===Resultados escolares===\n\n");
	 printf("\tNombre estudiante: %s\n", nombre);
	 printf("\tAsignatura: %s\n", materia);
	 
	 
    if (nota < 5) {
    	printf("\tSuspendiste, devuelvete a primaria. %s con %.2f\n", materia, nota);
	}
	
	else if (nota < 7 ) {
		printf("\tAprobaste %s con %.2f!\n", materia, nota);
	}
	
	else if (nota < 9) {
		printf("\tCalificacion notable en %s con %.2f!\n", materia, nota);
	}
	else if (nota < 10) {
		printf("\tEres un genio, nota sobresaliente en %s con %.2f!\n", materia, nota);
	}
	else if (nota == 10) {
		printf("\tSacaste matricula de honor, felicitaciones!\n");
	}

	return 0;
}
