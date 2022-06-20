#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("-----TUGAS ASD-----\n");
    printf("======MENU UTAMA======\n");
    int pilih, nim, nilai;
    int datar, tegak, input,a , b, c, d, e, f, g,x = 1,y = 0,z, batas = 0;
    char menu, kembali, nama[20], matkul[20];

    while(menu !=0){
    printf("\n");
    printf("1. Cek Kelulusan Matkul\n");
    printf("2. Cinta\n");
    printf("3. Keluar\n");
    printf("Masukkan Pilihan Menu : ");
    scanf("%d", &pilih);

    switch(pilih){
    case 1:
        printf("KELULUSAN MATKUL\n");
        printf("Masukkan Nama : ");
        scanf("%s", &nama[50]);
        printf("Masukkan NIM : ");
        scanf("%d", &nim);
        printf("Masukkan Matkul : ");
        scanf("%s", &matkul[20]);
        printf("Masukkan Nilai : ");
        scanf("%d", &nilai);
        if(nilai <= 100 && nilai >=85){
            printf("Selamat, %s kamu lulus mata kuliah %s dengan mendapatkan A", &nama[50], &matkul[20]);
        }
        else if(nilai <= 84 && nilai >=80){
            printf("Selamat, %s kamu lulus mata kuliah %s dengan mendapatkan AB", &nama[50], &matkul[20]);
        }
        else if(nilai <= 79 && nilai >=75){
            printf("Selamat, %s kamu lulus mata kuliah %s dengan mendapatkan B", &nama[50], &matkul[20]);
        }
        else if(nilai <= 74 && nilai >=70){
            printf("Selamat, %s kamu lulus mata kuliah %s dengan mendapatkan BC", &nama[50], &matkul[20]);
        }
        else if(nilai <= 69 && nilai >=65){
            printf("Selamat, %s kamu lulus mata kuliah %s dengan mendapatkan C", &nama[50], &matkul[20]);
        }
        else if(nilai <= 64 && nilai >=60){
            printf("Selamat, %s kamu lulus mata kuliah %s dengan mendapatkan CD", &nama[50], &matkul[20]);
        }
        else if(nilai <= 59 && nilai >=55){
            printf("Maaf, %s kamu tidak lulus mata kuliah %s dengan mendapatkan D", &nama[50], &matkul[20]);
        }
        else{
            printf("Maaf, %s kamu tidak lulus mata kuliah %s dengan mendapatkan E", &nama[50], &matkul[20]);
        }
        printf("\n\n");
        printf("Tekan apa saja untuk kembali ke menu utama ");
        getch();
        break;
    case 2:
        printf("=====CINTA=====\n");
        printf("Seberapa besar cintamu ?  ");
        scanf("%d", &input);
        printf("\n\n");
        if(input % 2 == 0)input+=1;
            a = input/4;
            b = input/2;
            c = input*3/4;
            d = a;
            e = a+2;
            f = c;
            g = c+2;
            for(tegak = 1; tegak <= input; tegak++)
            {
                if(tegak >= input/4)
                {
                    x = x+1;
                    y = input+1-x;
                }
                for(datar = 1; datar <= input; datar++)
                {
                    if(tegak == 1)
                    {
                        if(datar == a+1|| datar == c+1)printf("*");
                        else printf(" ");
                    }
                    else if(tegak < (input/4)+1)
                    {
                        if(d < 1||f < input/2+1)
                        {
                            batas++;
                            d=1;
                            if(batas == 1)f = input/2+1;
                            else if(batas !=1 )f = 1;
                        }
                        if(e>(input/2)+1||g > input)
                        {
                            batas++;
                            g = input;
                            if(batas == 1)e = input/2+1;
                            else if(batas != 1)e = input;
                        }
                if(datar == d-(a/30)||datar == e+(a/30)||datar == f-(a/30)||datar == g+(a/30))printf("*");
                else printf(" ");
                    }
                     else if(tegak > (input/4))
                     {
                            if(x > input/2+1||y < input/2+1)printf(" ");
                            else if(datar == x||datar == y)printf("*");
                            else printf(" ");
                     }
                }
                d = d-a-3;
                e = e+a+2;
                f = f-a-2;
                g = g+a+3;
                a += 1;
                printf("\n");
        }
        printf("\n\n");
        printf("Tekan apa saja untuk kembali ke menu utama ");
        getch();
        break;
    case 3:
        printf("\n");
        printf("-----------");
        goto selesai;
        break;
        default:
        printf("MENU YANG ANDA PILIH TIDAK ADA\n");
        printf("Tekan apa saja untuk kembali ke menu utama ");
        getch();
    }
    }
    selesai:
    system("exit");
}

