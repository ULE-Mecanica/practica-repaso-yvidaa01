#include <stdio.h>
void multiplicacion (int n1, int n2);
int main () {
int n1, n2, total;
	total = 0;
	printf ("Introduce un número: ");
	scanf ("%i", &n1);
	printf ("Introduce otro número: ");
	scanf ("%i", &n2);

 multiplicacion (n1, n2) ;

return 0;
}

void multiplicacion (int n1, int n2) {
	int i, total;
	total = 0 ;
	for (i=1; i<= n2; i++){
		total = total + n1;
		}
	printf ("El resultado de su producto es: %i.\n", total);

	
	}
