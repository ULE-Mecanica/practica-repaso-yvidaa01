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
i = 1;
while (i <= num){
resultado = resultado * i;
i++;
}
printf ("El factorial del número es: %i. \n", resultado);
}
