#include <stdlib.h>
#include <stdio.h>

int main() {
    int precio_u, unidades, importe;
    char nombre [30];
    
	 {
    
    printf("Importe de Venta Lulo's Supermarket \n");
    printf("Nombre del producto: ");
         fgets(nombre, sizeof(nombre), stdin);
    
    int i = 0;
while (nombre[i] != '\0') {     // recorre el texto letra por letra
    if (nombre[i] == '\n') {    // si encuentra un salto de línea
        nombre[i] = '\0';       // lo reemplaza por el final del texto
        break;                  // y sale del ciclo
    }
    i++;
}
}
    printf("Precio unitario: ");
         scanf("%d", &precio_u);     
    printf("Unidades vendidas: ");
         scanf("%d", &unidades);  
         
	 system("cls"); 
	 
	printf("Importe de Venta Lulo's Supermarket \n");
	
    importe= unidades*precio_u;
    
     printf("Nombre del producto: %s \n", nombre);
     printf("Precio unitario: %d \n", precio_u);
     printf("Numero de unidades vendidas: %d \n", unidades);
     printf("\n   El importe total de venta de %s es de %d\n ", nombre, importe);
     
     
	return 0;
	}
