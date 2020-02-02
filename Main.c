#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int opc;
char alf1[31];

char n, m;
int main(int argc, char *argv[]) {
	char letra = 'f';	
	printf("Seleccione como quiere ingresar los datos");
	printf("\nOpcion1: Ingresar datos uno por uno");
	printf("\nOpcion2: Ingresar un rango de datos");
	scanf("\n%d", &opc);
	

	switch(opc){
		case 1: 
			printf("Ingrese el alfabeto 1: ");
			scanf("\n%c", &alf1);
			gets(alf1);
			printf("El alfabeto 1 es %s", alf1);
		break;
		
		case 2:
		
			printf("Ingrese el rango: \n");
			scanf("%c, %c", &n, &m);
			do{
				printf("%c", letra);
				letra++;
			}
			while(letra<='m');
		break;
		 
	}
	
	return 0;
}
