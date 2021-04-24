#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int edad, enie;
    char nombre[20];

    enie = 164;

    printf("%s", "Ingrese su nombre: ");
    scanf("%s", nombre);

    printf("%s", "Ingrese su edad: ");
    scanf("%d", &edad);

    printf("Buen Dia %s, su edad es de %d a%cos. \n", nombre, edad, enie);

    system("pause");

    return 0;
}
