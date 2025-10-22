#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int apuesta, moneda, doble;
	int seguir=1;
	 
	while (seguir==1) {
	printf("====Apuesta doble o pierde todo!==== ");
	printf("\n\nCuanto deseas apostar?: ");
	    scanf("%d", &apuesta);
    printf("\nLa moneda cae en");
    sleep(1); 
    printf(".");  
    sleep(1);
    printf(".");  
    sleep(1);
    printf(".\n");
    	
	srand(time(NULL)); 
    moneda = rand() % 2;
    
	if (moneda == 1) {
		
		doble= apuesta*2;
		sleep(2);
        printf("\n\tCARA\n");
        sleep(1);
        printf("Ganaste el doble: $%d\n", doble);
        sleep(1);
        printf("\n   Felicitaciones! \n");
    } 
	else if (moneda == 0) {
        printf("\n\tCRUZ \n");
        sleep(1);
        printf("\n Pierdes todo tu dinero :c\n");
        sleep(1);
    }
    sleep(2);
     printf("\n  ====Deseas volver a apostar?==== \n");
     printf("\t1. SI \t 2. NO");
     printf("\n  Digita tu respuesta: ");
        scanf("%d", &seguir);   
    system("cls");
 }
 if (seguir=2)
     system("cls");
     printf("===Gracias por jugar===");
 return 0;
}
