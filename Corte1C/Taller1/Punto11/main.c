#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
char password [30];
char correcta []= "lulo01";
char usuario [30];
int intentos = 0;

while (intentos < 3) {
	
printf("===Ingreso al sistema===\n\n");
printf("Ingrese su usuario: ");
scanf("%s", usuario);


printf("\nIngrese la contrasena: ");
scanf("%s", password);


if (strcmp(password, correcta) == 0) {
	printf ("\n\n\tContrasena correcta \n");
	sleep(1);
	printf("Senor (a) %s, bienvenid@ al sistema.", usuario);
	
	return 0;
}

else {
	system ("cls");
	printf ("Lo siento senor (a) %s, contrasena equivocada, vuelva a intentarlo.\n\n", usuario);
	printf("\n\tRecuerde la contraseña es el apodo y mes de la programadora.\n");
	sleep(3);
	system("cls");
}

intentos++;

}
	printf("Lo siento, alcanzo el limite de intentos, por favor solicite el acceso. \n");
	
	return 0;
}
