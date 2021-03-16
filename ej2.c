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

    printf("\nDirecciones de memoria de la matriz 3x3:\n");
    for(i=0; i<3; i++){    
        printf("|\t");    
        for(j=0; j<3; j++){
            printf("%p\t|\t", &a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for(i=0; i<3; i++){        
            printf("Direcci%cn de memoria del rengl%cn %d: %p\n", 162, 162, i, &a[i][0]);
    }   

    printf("\nDireccion de memoria del primer elemento del arreglo: %p\n", &a[0][0]);
    printf("Direccion de memoria de la variable de tipo arreglo arr: %p\n", &a);

    system("pause");
    return 0;
}
