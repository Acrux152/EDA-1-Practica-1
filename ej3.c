#include <stdio.h>
#include <stdlib.h>

/*Equipo 9. Código escrito por Novak Okcham González*/

/*13 DE MARZO DE 2021*/

/*Variables usadas en los ciclos declaradas de manera global para evitar incompatibilidades de IDE*/

int i, j, k;

int main(){
    
    char a[3][2][4];
    
    int i, j, k;

    /*Ciclo para pedirle los datos al usuario*/
    for(i=0; i<3; i++){        
        for(j=0; j<2; j++){            
            for(k=0; k<4; k++){
                printf("Introduzca los valores del arreglo en %i %i %i \n", i, j, k);
                scanf("%c", &a[i][j][k]);
                fflush(stdin);                          /*Importante para que guarde bien los caracteres*/
            }
        }
    }
    
    /*Ciclo para imprimir la matriz 3x2x4*/
    for(i=0; i<3; i++){
        printf("\nMatriz %d\n", i+1);     
        for(j=0; j<2; j++){ 
            printf("|\t");              
            for(k=0; k<4; k++){
                printf("%p\t|\t",  &a[i][j][k]);
            }
            printf("\n");
        }
    }
    
    printf("\nDireccion de memoria del primer elemento del arreglo: %p\n", &a[0][0][0]);
    printf("Direccion de memoria de la variable de tipo arreglo arr: %p\n", &a);
    
    system("pause");
    return 0;
}
