#include <stdio.h>
#include <stdlib.h>


int main() {
int dia, mes, year;
int seguir; 

seguir=1;

while (seguir==1){
	
	
	printf("===Signo zodiacal segun tu fecha de nacimiento!===\n\n");
	printf("A continuacion digita tu fecha de nacimiento\n\n");
	printf("\tDia: ");
	    scanf("%d", &dia);
	printf("\tMes: ");    
	    scanf("%d", &mes);
	printf("\tYear: ");
	    scanf("%d", &year);
	    
	printf("\nTu signo zodiacal es: ");  
	
	if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) {
		printf("Aries! Fecha: %d/%d/%d\n\nZodiaco de fuego, lider, pero impulsivo\t\n" , dia, mes, year);
	}
	
	else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) {
		printf("Tauro! Fecha: %d/%d/%d\n\nZodiaco de tierra, leal, pero terco\t\n " , dia, mes, year);
	}
	
	else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
		printf("Geminis! Fecha: %d/%d/%d\n\nZodiaco de aire, sociable, pero inconstante\t\n" , dia, mes, year);
	}
	
	else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
		printf("Cancer! Fecha: %d/%d/%d\n\nZodiaco de agua, sensibles, pero te aislas\t\n" , dia, mes, year);
	}
	
	else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) {
		printf("Leo! Fecha: %d/%d/%d\n\nZodiaco de fuego, carismatico, pero orgulloso\t\n" , dia, mes, year);
	}
	
	else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
		printf("Virgo! Fecha: %d/%d/%d\n\nZodiaco de tierra, ordenado, pero exigente\t\n" , dia, mes, year);
	}
	
	else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
		printf("Libra! Fecha: %d/%d/%d\n\nZodiaco de aire, elegante, pero indeciso\t\n" , dia, mes, year);
	}
	
	else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
		printf("Escorpio! Fecha: %d/%d/%d\n\nZodiaco de agua, amas intensamente, pero eres celoso\t\n" , dia, mes, year);
	}
	
	else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
		printf("Sagitario! Fecha: %d/%d/%d\n\nZodiaco de fuego, optimista, pero impaciente\t\n" , dia, mes, year);
	}
	
	else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) {
		printf("Capricornio! Fecha: %d/%d/%d\n\nZodiaco de tierra, perfeccion, perfeccion pura\t\n" , dia, mes, year);
	}
	
	else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) {
		printf("Acuario! Fecha: %d/%d/%d\n\nZodiaco de aire, originales, pero rebeldes\t\n" , dia, mes, year);
	}
	
	else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) {
		printf("Piscis! Fecha: %d/%d/%d\n\nZodiaco de agua, empatico, pero te dejas influir facilmente\t\n" , dia, mes, year);
	}
	
	else {
		printf("Fecha invalida, por favor ingrese otra.\n");
	}
	
	printf("\n\tDeseas comprobrar otra fecha? (1.SI 2.NO): ");
	    scanf("%d", &seguir);
	system("cls");
	
}

if (seguir == 2) {

system("cls");
  printf("\n\nGracias por usar nuestro programa de signos zodiacales, que el universo siempre sea tu mejor aliado!\n\n");
  
}
return 0;
}
	

