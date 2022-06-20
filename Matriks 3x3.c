#include <stdio.h>
#include <stdlib.h>

int main()
{
    int baris, kolom, x, y, dg1 = 0, dg2 = 0, jml, matriks[3][3];
    for(x = 0; x < 3; x++){
        for(y = 0; y < 3; y++){
            printf("Input Matriks [%d][%d] : ",x,y);
            scanf("%d", &matriks[x][y]);
        }
    }
    printf("Matriks : \n");
    for(x = 0; x < 3; x++){
        for(y = 0; y < 3; y++){
            printf(" %d ", matriks[x][y]);
        }
            printf("\n\n");
    }
    printf("Diagonal 1 \n");
    for(x = 0; x < 3; x++){
        for(y = 0; y < 3; y++){
            if(x == y){
                printf(" %d ", matriks[x][y]);
                dg1 += matriks[x][y];
            }
        }
    }
    printf("\n");
    printf("Jumlah diagonal1 : %d\n", dg1);
    printf("\n");
    printf("Diagonal 2 \n");
    for(x = 0; x < 3; x++){
        for(y = 0; y < 3; y++){
            if(x < y){
            printf(" %d ", matriks[x][y]);
            dg2 += matriks[x][y];
            }
        }
    }
    printf("\n");
    printf("Jumlah diagonal2 : %d\n", dg2);
    printf("\n");
    jml = dg1 * dg2;
    printf("Jumlah diagonal1 * diagonal2 : %d\n", jml);
}
