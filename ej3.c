#include <stdio.h>
#include <stdlib.h>

/*Equipo 9. Código escrito por Novak Okcham González*/

int main(){
    char a[3][2][4];
    int i, j, k;
    int * p;
    p=&a;

    for(i=0; i<3; i++){        
        for(j=0; j<2; j++){            /*Ciclo para pedirle los datos al usuario*/
            for(k=0; k<4; k++){
                printf("Introduzca los valores del arreglo en %i %i %i \n", i, j, k);
                scanf("%c", &a[i][j][k]);
                fflush(stdin);                          /*Importante para que guarde bien los caracteres*/
            }
        }
    }

    for(i=0; i<3; i++){   
        printf("\nMatriz %d\n", i+1);     
        for(j=0; j<2; j++){            /*Ciclo para pedirle los datos al usuario*/
            for(k=0; k<4; k++){
                printf("%p\t",  &a[i][j][k]);            /*Importante para que guarde bien los caracteres*/
            }
            printf("\n");
        }
    }
    
    printf("\nDireccion de memoria del primer elemento del arreglo: %p\n", &a[0][0][0]);
    printf("Direccion de memoria de la variable de tipo arreglo arr: %p\n", p);

    system("pause");
    return 0;
}
