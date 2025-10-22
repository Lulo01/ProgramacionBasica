#include <stdio.h>
#include <stdlib.h>

int main() {
    int horas, precio_hora;
    int sueldob, reten, sueldon;
    char nombre [30];
    
    
    printf("Nomina de trabajadores Lulo's Company \n");
    printf("Nombre del trabajador: ");
          fgets(nombre, sizeof(nombre), stdin);
    
    int i = 0;
while (nombre[i] != '\0') {
    if (nombre[i] == '\n') {
        nombre[i] = '\0';
        break;
    }
    i++;
}


    printf("Horas trabajadas: ");
         scanf("%d", &horas);     
    printf("Precio por hora: $");
         scanf("%d", &precio_hora);  
         
	 system("cls"); 
	 
	printf("Nomina de trabajadores Lulo's Company \n");
	
    sueldob= precio_hora*horas;
    reten= sueldob*0.05;
    sueldon= sueldob-reten;
    
	 printf("Nombre del trabajador: %s \n", nombre);
     printf("Sueldo bruto: $%d \n", sueldob);
     printf("Retencion del 5%: $%d \n", reten);
     printf("\n   El saldo neto de %s es de $%d\n ", nombre, sueldon);
     
     
	return 0;
	}
