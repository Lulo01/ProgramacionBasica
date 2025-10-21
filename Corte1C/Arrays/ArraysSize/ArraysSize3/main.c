#include <stdio.h>
#include <stdlib.h>

int main() {
	
	double decimales[] = {2.1, 3.3, 2.5, 5.5, 6.8};
	int elementos = sizeof(decimales) / sizeof(decimales[0]);
	
	printf ("%d", elementos);
	
	return 0;
}
