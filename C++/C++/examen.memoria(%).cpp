//programas manejo de memoria
#include<stdio.h>
#include<iostream>

using namespace std;
int salir;
char palabra1[8];
char palabra2[8];
int main(){
    printf("Dime algo: ");
    scanf("%s",palabra1);//scanf para almacenar en memoria
    printf("\nDime algo mas: ");//\n para bajar al siguiente
    scanf("%s",palabra2);//se usa %s para una cadena de caracteres
    printf("Gacias por decir: \n");
    printf("  %x",palabra1);//%x dice la direccion de la palabra
    printf("  %c\n",*(palabra1+1));//ponerlo entre parentesis y sumar para elegir la letra que quieras
    printf("  %x",palabra2);//%x dice la direccion de la palabra
    printf("  %c",*palabra2);//se usa %c para que vaya letra a letra y "*" para que empiece
    scanf("%i",&salir);//se usa %i para numero entero , se usa & para la direccion de una variable
    return 0;
}


         
