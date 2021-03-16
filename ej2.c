#include <stdio.h>
#include <stdlib.h>

/*Equipo 9. Código escrito por Novak Okcham González*/

int main(){
    char a[3][3];
    int i, j;

    for(i=0; i<3; i++){        
        for(j=0; j<3; j++){            /*Ciclo para pedirle los datos al usuario*/
            printf("Introduzca los valores del arreglo en %i %i \n", i, j);
            scanf("%c", &a[i][j]);
            fflush(stdin);                          /*Importante para que guarde bien los caracteres*/
        }
    }

    for(i=0; i<3; i++){        /*imprime el valor almacenado y su direccion de memoria*/
        for(j=0; j<3; j++){
            printf("Valor almacenado en %i %i: %c\nDirecci%cn de memoria: %p\n", i, j,  a[i][j], 162, &a[i][j]);
        }
    }

    printf("\nDireccion de memoria del primer elemento del arreglo: %p\n", &a[0][0]);
    printf("Direccion de memoria de la variable de tipo arreglo arr: %p\n", &a);

    system("pause");
    return 0;
}
