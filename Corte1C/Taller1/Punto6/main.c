#include <stdio.h>
#include <stdlib.h>


int main() {
	int a, b, c;
	int min, max, seguir;
	
seguir= 1;

 while(seguir==1){
 	
printf("====Programa de valores maximos y minimos==== \n");

printf ("\tDigite el primer valor entero: ");
    scanf("%d", &a);
printf("\tDigite el segundo valor entero: ");
    scanf("%d", &b);
printf("\tDigite el tercer valor entero: ");
    scanf("%d", &c);
 
 max= a;
 min= a;
 
if (b > max) {
	max= b;
}	
if (c > max) {
	max= c;
}
if (b < min) {
	min= b;
}

if (c < min) {
	min= c;
}
    
printf("\n====Valores minimos y maximos digitados====\n");
printf("\tValor maximo= %d \tValor minimo= %d", max, min);

sleep(1);
printf("\n\n Desea digitar valores diferentes?\n\n");
printf("\t1.SI \t 2. NO\n");
printf("\nDigite su respuesta: ");
    scanf("%d", &seguir);
if (seguir==1) {
	system ("cls");
}
}

if (seguir==2){
	
	system ("cls");
	printf("Gracias por ultilizar nuestro programa c:");
	
}
	return 0;
}
