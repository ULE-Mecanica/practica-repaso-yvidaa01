#include <stdio.h>

void division (int n1, int n2);
int main () {
int a, b; //Cambiar el nombre de las variables
	printf ("Introduce el dividendo: ");
	scanf ("%i", &a);
	printf ("Introduce el divisor: ");
	scanf ("%i", &b);

 division (a, b) ;

return 0;
}

void division (int n1, int n2) {
	int cont = 0;
	while (n1>=n2){
	n1 = n1- n2;
	cont ++;
	}	
	 
	printf ("El resultado de su division es: %i.\n", cont);

	
	}
