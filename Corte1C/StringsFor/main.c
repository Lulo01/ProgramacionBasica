#include <stdio.h>
#include <stdlib.h>

int main() {
    char cod1[] = "Holo";
    char cod2[] = "Hola";
    int i;
    
      
	  for (i = 0; cod1[i] == cod2[i]; i++) {

        if (cod1[i] == '\0' && cod2[i] == '\0') {

            printf("Los dos codigos son iguales. \n");
            
            return 0;
        }
    }
    
    printf("Los codigos no son iguales.\n");
    
    return 0;
}
