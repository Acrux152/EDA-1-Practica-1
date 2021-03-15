#include <stdio.h>
#include <stdlib.h>

/*Equipo 9. Código escrito por Novak Okcham González*/

int main(){
    char arr[10];
	
    for(int i=0; i<10; i++){                    /*Ciclo para pedirle los datos al usuario*/
        printf("Introduzca los valores del arreglo en %i \n", i);
        scanf("%c", &arr[i]);
        fflush(stdin);                          /*Importante para que guarde bien los caracteres*/
    }

    for(int i=0; i<10; i++){                    /*Ciclo para imprimir los caracteres almacenados en el arreglo y sus direcciones de memoria*/
        printf("Valor almacenado en %i: %c\nDirecci%cn de memoria: %p\n", i, arr[i], 162, &arr[i]);
    }

    printf("\nDireccion de memoria del primer elemento del arreglo: %p\n", &arr[0]);
    printf("Direccion de memoria de la variable de tipo arreglo arr: %p\n", &arr);

    system("pause");
    return 0;
}
