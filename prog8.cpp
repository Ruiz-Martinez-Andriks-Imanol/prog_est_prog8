/* Autor: Andriks Imanol Ruiz Mártinez, Realizado: 17/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa 
Materia: Programación Estructrada
Ciclo: 01/2022

Este es un programa de condicionales de Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:
  
    -Variables enteras y flotantes
    -printf para mostrar varias variables
    -scanf
    -El uso de include para las librerias
    -condicional if
	-Comentarios para la doumentación interna del programa.
*/
#include<stdio.h>
int main() {
	//Declaración
	int tipo;
	float cantidad, descuento=0, total;
	//Proceso
	printf("Introduce el tipo de cliente (1. Distribuidor, 2. Cliente normal): ");
	scanf("%d",&tipo);
	printf("Introduce una cantidad: ");
	scanf("%f",&cantidad);
	if(tipo==1){ //condición
		descuento=cantidad*0.1;
	}
	total=cantidad-descuento;
	//Salida
	printf("Descuento:\t\t-$%.2f\n",descuento);
	printf("\t\t	------------\n");
	printf("total:\t\t\t $%.2f",total);
	return 0;
}

