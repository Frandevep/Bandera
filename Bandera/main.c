#include <stdio.h>

int main() {

    int bandera = 0; // inicializamos la bandera en 0
    int num;

    printf("Ingrese un numero positivo:");
    scanf("%d",&num);

    if (num>0) {
        bandera=1; // activamos la bandera si el número es positivo
    }

    if (bandera) {
        printf("El numero ingresado es positivo\n");
    } else {
        printf("El numero ingresado no es positivo\n");
    }

    return 0;
}
