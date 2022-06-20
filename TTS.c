#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
#include<conio.h>

void lingkaran(){
    int i, j;
}

void manipulasi(){
    char kalimat[100];
    int x, jum;
    printf("Masukkan Kalimat : ");
    scanf(" %[^\n]", &kalimat);
	for(x = 0; kalimat[x] != '\0'; x++){
		if(x == 0){
			if((kalimat[x] >= 'a' && kalimat[x] <= 'z'))
				kalimat[x] = kalimat[x]-32;
			continue;
		}
		if(kalimat[x] == ' '){
			x++;
			if(kalimat[x] >= 'a' && kalimat[x] <= 'z'){
				kalimat[x] = kalimat[x]-32;
				continue;
			}
		}
		else{
			if(kalimat[x] >= 'A' && kalimat[x] <= 'Z')
				kalimat[x] = kalimat[x]+32;
		}
	}
    printf("Kalimat berganti menjadi : %s\n", kalimat);
    printf("Jumlah kata adalah : %d", strlen(kalimat));
    printf("\n");
}

void matriks(){
    int baris, kolom, x, y, matriks[5][5];
    float determinant;
    printf("Input jumlah baris matriks : ");
    scanf("%d", &baris);
    printf("Input jumlah kolom matriks : ");
    scanf("%d", &kolom);
    for(x = 0; x < baris; x++){
        for(y = 0; y < kolom; y++){
            printf("A(%d,%d) : ",x,y);
            scanf("%d", &matriks[x][y]);
        }
    }
    determinant = matriks[0][0] * ((matriks[1][1]*matriks[2][2]) - (matriks[2][1]*matriks[1][2])) -matriks[0][1] * (matriks[1][0]
   * matriks[2][2] - matriks[2][0] * matriks[1][2]) + matriks[0][2] * (matriks[1][0] * matriks[2][1] - matriks[2][0] * matriks[1][1]);
    printf("Determinan : %.2f\n", determinant);
    printf("\nInverse of matrix is: \n");
	for(x = 0; x < baris; x++){
		for(y = 0; y < kolom; y++)
			printf("%.2f\t",((matriks[(y+1)%3][(x+1)%3] * matriks[(y+2)%3][(x+2)%3]) - (matriks[(y+1)%3][(x+2)%3] * matriks[(y+2)%3][(x+1)%3]))/ determinant);

		printf("\n");
	}
}

int main()
{
    printf("===========================================\n");
    printf("          PROGRAM TTS SEDERHANA               \n");
    printf("===========================================\n");

    int pilih, menu, selesai;
    while(menu !=0){
    printf("\n");
    printf("1. Cetak Lingkaran\n");
    printf("2. Matriks Invers\n");
    printf("3. Manipulasi Kata\n");
    printf("Masukkan Pilihan Menu : ");
    scanf("%d", &pilih);

    switch(pilih){
    case 1:
        system("cls");
        lingkaran();
        int a;
        printf("-------- CETAK LINGKARAN --------\n");
        printf("Masukkan angka 3 untuk mencetak lingkaran : ");
        scanf("%d", a);
        printf("Tekan apa saja untuk kembali ke menu utama \n");
        getch();
        break;
    case 2:
        system("cls");
        printf("-------------------------------------------------------------\n");
        printf("----------------PROGRAM INVERS MATRIKS------------------------\n");
        printf("-------------------------------------------------------------\n");
        matriks();
        printf("Tekan apa saja untuk kembali ke menu utama \n");
        getch();
        break;
    case 3:
        system("cls");
        printf("-------- Manipulasi Kata --------\n");
        manipulasi();
        printf("Tekan apa saja untuk kembali ke menu utama \n");
        getch();
        break;
        default:
        printf("Terjadi Kesalahan Input\n");
        printf("Tekan apa saja untuk kembali ke menu utama \n");
        getch();
    }
    }
}
