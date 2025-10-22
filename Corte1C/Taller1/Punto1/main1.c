#include <stdlib.h>
#include <stdio.h>

int main() {
    int choice;
    int a, b, c, d, area, perimetro;
    
int seguir= 1;
    
    while (seguir== 1) {
    
    printf("Areas y Perimetros \n 1. Cuadrado \n 2. Rectangulo \n 3. Triangulo \n 4. Circulo \n 5. Salir \n");
    printf("Selecciona una opcion: ");
         scanf("%d", &choice );  
		 
	 
	  
    switch (choice) {
        case 1:
        	
        	system("cls");
            printf("Elegiste el cuadrado \n");
            printf("Ingresa uno de sus lados: ");
             scanf("%d", &a);
                 area= a*a;
                 perimetro= 4*a;
             
             printf("El area del cuadrado es = %d y su perimetro es = %d \n", area, perimetro);
         
            break;

        case 2:
        	
        	system("cls");
            printf("Elegiste el rectangulo \n");
            printf("Ingresa el ancho: ");
             scanf("%d", &a);
            printf ("Ingresa la base: ");
             scanf("%d", &b);
                 area= a*b;
                 perimetro= 2*(a+b);
             
             printf("El area del rectangulo es = %d y su perimetro es = %d \n", area, perimetro);
        
            break;

        case 3:
           
           system("cls");
		    printf("Elegiste el triangulo \n");
            printf("Ingresa la base: ");
             scanf("%d", &a);
            printf ("Ingresa la altura: ");
             scanf("%d", &b);
            printf("Ingresa el lado 1: ");
             scanf("%d", &c);
            printf ("Ingresa el lado 2: ");
             scanf("%d", &d);
                 area= a*b/2;
                 perimetro= a+c+d;
             
             printf("El area del triangulo es = %d y su perimetro es = %d \n", area, perimetro);
             
            break;
            
        case 4:
            
            system("cls");
			 printf("Elegiste el circulo \n");
            printf("Ingresa el radio: ");
             scanf("%d", &a);
                 area= 3.1416 * a * a;
                 perimetro=  2 * 3.1416 *a;
             
             printf("El area del circulo es = %d y su perimetro es = %d \n", area, perimetro);
             
			break;
			
		case 5:
			
			system("cls");
			seguir= 5;
			printf("Se finalizo el programa.\n");
			
			break;
        
            
		default:
			
			system("cls");
            printf("Opcion invalida.\n");
            break;
			} 

       printf("Presione ENTER para continuar");
        getchar();
        getchar();
        system("cls");
    } 
     return 0;
    } 
