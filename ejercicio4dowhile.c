#include <stdio.h>
int factorial (int num, int resultado);
int main (){
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
do{
	resultado = resultado * i;
i++;
}
while (i<=num);{
}

printf ("El factorial del numero es: %i. \n", resultado);

}
