#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int opc, n;
char alf1[31], alf2[31];
char opc2, x;
char w1[31], w2[31];

char n1, m1, letra;
int main(int argc, char *argv[]) {
	printf("a)Ingrese el alfabeto");
	printf("\nSeleccione como quiere ingresar los datos");
	printf("\n\tOpcion1: Ingresar datos uno por uno");
	printf("\n\tOpcion2: Ingresar un rango de datos");
	scanf("\n\t\t%d", &opc);
	

	switch(opc){
		case 1: 
			printf("Ingrese el alfabeto 1: ");
			scanf("\n%c", &alf1);
			gets(alf1);
			printf("\nEl alfabeto 1 es %s, ", alf1);
			
			printf("\nIngrese el alfabeto 2: ");
			scanf("\n%c", &alf2);
			gets(alf2);
			printf("\nb)El alfabeto 2 es %s, ", alf2);
			system("PAUSE");
			printf("\n\n");
			
		break;
		
		case 2:
			printf("Ingrese el rango: \n");
			scanf("%c %c", &n1, &m1);
			do{
				printf("%c", letra);
				letra++;
			}
			while(letra<='m1');
		break;
		 
	}
	
		do{
			system("CLS");
			printf("\nMENU DE OPCIONES");
			printf("\n\tc)Leer dos cadenas: w1 y w2");
			printf("\n\td) Generar: (w1w2)^n");
			printf("\n\te) Obtener: |w1|x");
			printf("\n\tf)Indicar si w1 es un prefijo o sufijo (propio o no propio), o subcadena, o subsecuencia, o cualquier combinación anterior, de w2.");
			printf("\n\tg)Leer la palabra w3 y desplegar en pantalla si esta cadena es o no es un palíndromo.");
			printf("\n\th)Generar (desplegar en pantalla): n, donde n es un entero (mayor que cero) y es un valor de entrada.");
			printf("\n\ti)Generar 3 palabras válidas de forma aleatoria de 1 o de 2");
			printf("\n\n Opcion a escoger: ");
			scanf("%c", &opc2);
			
			switch(opc2){
				system("CLS");
				case 'c':
					printf("\nc)Leer dos cadenas");
					printf("\nDeben de ser elementos del alfabeto 1");
					
					printf("\n\tIngresa la primer cadena");
					scanf("\n\t %c", &w1);
					gets(w1);
					if(alf1[31]=!w1[31])
					{
						printf("\nDisculpe, la cadena es inválida ya que contiene algún símbolo que no pertenece al alfabeto1");
						printf("\nEl alfabeto 1 es: %s", alf1);	
					}
					else{
						printf("\nLa cadena 1 es: %s", w1);
					}
					printf("\n\tIngresa la segunda cadena");
					scanf("\n\t %c", &w2);
					gets(w2);	
					if(alf1[31]=!w2[31])
					{
						printf("\nDisculpe, la cadena es inválida ya que contiene algún símbolo que no pertenece al alfabeto1");
						printf("\nEl alfabeto 1 es: %s", alf1);	
					}
					else{
						printf("\nLa cadena 2 es: %s", w2);
					}
				break;			
				
				case 'd':
					system("CLS");
					printf("Generar: (w1w2)^n");
					printf("\nDonde n es un entero (positivo o negativo)");
					printf("\nIngrese n:\t");
					scanf("%i", &n);
					
					
				break;
				
				case 'e':
					system("CLS");
					printf("\n\te) Obtener: |w1|x");
					printf("\nDonde x debe de pertenecer al alfabeto 1");
					printf("\n\tIngresa el valor de x: ");
					scanf("%c", &x);
						if(alf1[31]=!x)
						{
							printf("\nDisculpe 'x' es inválida ya que contiene algún símbolo que no pertenece al alfabeto1");
							printf("\nEl alfabeto 1 es: %s", alf1);	
						}
						else{
							printf("\nYa que 'x' es: %c", x);
						}
					
					int find(char *cadena, char letra_a_contar, int size)
					{
					    int acc = 0, i;
					    for(i = 0; i < size ; i++) {
					        if (cadena == letra_a_contar) {
					            acc = acc+1;
					        }
					    }
					    return acc;
					}
					    char cad[31];
					    int size;
					    int letra_a_buscar;
					    int res = 0;
					    printf("Escribe la frase:");
					    scanf("%s",&cad);
					    printf("Cuantas letras tiene la frase:");
					    scanf("%i",&size);
					    printf("Escribe la letra que quieres contar:");
					    scanf("%s",&letra_a_buscar);
					    res = find(cad, size, letra_a_buscar);
					    printf("%i", res);
					    return 0;
					
					
			}
				
		}while(opc2!=6);
	
	
	
	return 0;
}
