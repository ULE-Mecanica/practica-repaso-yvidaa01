#include <stdio.h>

int factorial (int num, int resultado);

int main () {
int num, resultado;
resultado = 1;
	printf ("Introduce un número: ");
	scanf ("%i", &num);
factorial (num, resultado);
return 0;
}

int factorial (int num, int resultado){
int i;
for (i=1; i<=num; i++){
	resultado = resultado * i;
}


printf ("El factorial del número introducido es: %i .\n", resultado);
}
