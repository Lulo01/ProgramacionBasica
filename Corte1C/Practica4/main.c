#include <stdio.h>
#include <stdlib.h>

int a, b, r;


int main(int argc, char *argv[]) {

	a=20; 
	b=20;
	r=a+b;

	printf("El resultado de sumar %d y %d es: %d\n", a, b, r);
	
	if (r == 40){
		printf("El resultado es = 40\n", r);
	} else{
		if (r < 40) {
			printf ("El resultado es < 40\n", r);
		} else {
			printf ("El resultado es > 40\n", r);
		} 
		}
	
	

	return 0;
} 

