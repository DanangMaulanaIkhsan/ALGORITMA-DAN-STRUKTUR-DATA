#include <stdio.h>
#include <stdlib.h>

void tambahData(){
    FILE *list;
    char nama[100], email[100], tanggalLahir[100], nik[100], nomorHP[100];
    int data;

    if((list = fopen("DataPenduduk.txt", "a")) == NULL){
        printf("file gagal diciptakan!\n");
        exit(1);
    }
    printf("Masukkan banyaknya penduduk : ");
    scanf("%d", &data);
    for(int x = 1; x <= data; x++){
        printf("%d. \n", x);
        printf("Masukkan nama : ");
        scanf(" %[^\n]", &nama);
        fflush(stdin);
        strcat(nama, "\t|");
        fputs(nama, list);
        printf("Masukkan NIK : ");
        scanf("%[^\n]", &nik);
        fflush(stdin);
        strcat(nik, "\t|");
        fputs(nik, list);
        printf("Masukkan tanggal lahir : ");
        scanf(" %[^\n]", &tanggalLahir);
        fflush(stdin);
        strcat(tanggalLahir, "\t|");
        fputs(tanggalLahir, list);
        printf("Masukkan nomor hp : ");
        scanf("%[^\n]", &nomorHP);
        fflush(stdin);
        strcat(nomorHP, "\t|");
        fputs(nomorHP, list);
        printf("Masukkan email : ");
        scanf(" %[^\n]", &email);
        fflush(stdin);
        strcat(email, "\t|\n");
        fputs(email, list);
    }
    printf("\n");
    printf("Data telah disimpan");
    printf("\n");
    fclose(list);
}

void lihatData(){
    char data;
    FILE *list;
    printf("-----Data Penduduk Desa Raja Nangka-----\n");
    printf("Nama\t     |NIK\t     |Tanggal Lahir\t     |Nomor HP\t     |Gmail\t\n");
    if((list = fopen("DataPenduduk.txt", "r")) == NULL){
        printf("file gagal dibuka \n");
        exit(1);
    }
    while((data = fgetc(list)) != EOF)
        putchar(data);
        printf("\n");
        fclose(list);
}

void urutData(int arr[], int n){
    int i, j, tmp;
    FILE *list;
    if((list = fopen("DataPenduduk.txt", "r")) == NULL){
        printf("file tak dapat dibuka \r\n");
        exit(1);
    }
    for(i = 0; i < n; i++){
        for(j=0; j < n-i-1; j ++){
            if(arr[j] > arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

void cariNama(){
    char pch, src[100], nik[100];
    FILE *list;
    if((list = fopen("DataPenduduk.txt", "r")) == NULL){
        printf("file tak dapat dibuka \r\n");
        exit(1);
    }
    printf("Masukkan NIK untuk mencari penduduk : ");
    fflush(stdin);
    gets(src);
    while(fgets(nik, 150, list) != NULL){
        pch = strstr(nik, src);
        if(pch != NULL){
            printf("Nama\t|NIK\t|Tanggal Lahir\t|Nomor HP\t|Gmail\t\n");
            printf("%s", nik);
            printf("\n");
        }
    }
    fclose(list);
}

int main()
{
    system("cls");
    int pilih, menu, selesai, arr, n;
    char lagi='enter';
    printf("=====Data Penduduk Desa Raja Nangka=====\n");
    while(menu != 0){
    printf("\n");
    printf("1. Tambah data penduduk\n");
    printf("2. Lihat data penduduk\n");
    printf("3. Urutkan data berdasarkan nama\n");
    printf("4. Pencarian data berdasarkan NIK\n");
    printf("5. Exit\n");
    printf("Masukkan Pilihan Menu : ");
    scanf("%d", &pilih);

    switch(pilih){
    case 1:
        system("cls");
        tambahData();
        printf("Tekan Enter Untuk Kembali Ke Menu Utama");
        lagi=getch();
        break;
    case 2:
        system("cls");
        lihatData();
        printf("Tekan Enter Untuk Kembali Ke Menu Utama");
        lagi=getch();
        break;
    case 3:
        system("cls");
        urutData(arr, n);
        printf("Tekan Enter Untuk Kembali Ke Menu Utama");
        getch();
        break;
    case 4:
        system("cls");
        cariNama();
        printf("Tekan Enter Untuk Kembali Ke Menu Utama");
        lagi=getch();
        break;
    case 5:
        system("cls");
        goto selesai;
        break;
    default:
        printf("Pilihan tidak ada\n");
    }
    }
    selesai:
    system("exit");
}
