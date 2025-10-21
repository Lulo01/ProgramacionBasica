#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int numeros[] = {10, 25, 50, 200, 100};
	int elementos = sizeof (numeros) / sizeof(numeros[0]);
	
	printf ("%d", elementos);
	
	return 0;
}
