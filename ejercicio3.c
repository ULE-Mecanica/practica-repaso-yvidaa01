#include <stdio.h>
int contrasena (int num);
int main (){
int num;
	printf ("Introduzca la contraseña: ");
	scanf ("%i", &num);

contrasena (num);
return 0;
}

int contrasena (int num) {
int i;
	for (i=1; i<=3; i++){
	if (num == 4567){
	printf ("Contraseña correcta.\n");
	return 0;
	}

	else {
	if (num < 4567){
	printf ("Contraseña incorrecta (menor). \n");
	}
	if (num > 4567) {
	printf ("Contraseña incorrecta (mayor). \n");
	}
	}
 if (i<3){
	printf ("Introduzcala de nuevo: ");
	scanf ("%i",&num);
	}
	}


	}
