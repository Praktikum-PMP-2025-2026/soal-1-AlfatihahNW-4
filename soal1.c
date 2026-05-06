/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
*   Modul               : 04 – Dynamic Structures
*   Hari dan Tanggal    : Rabu, 6 Mei 2026
*   Nama (NIM)          : 13224095
*   Nama File           : no1.c
*   Deskripsi           : menghitung durasi waktu tunggu pasien
**/

#include <stdio.h>
#include <string.h>

typedef struct pasien{
    char id[50];
    int durasi;
    struct pasien* next;
}pasien;


int main(){
    int ukuran;
    scanf("%d", &ukuran);
    pasien data[ukuran];

    for (int i = 0; i < ukuran; i++){
        scanf("%s",data[i].id);
        scanf("%d",&data[i].durasi);
    }

    printf("ORDER");
    for (int i = 0; i < ukuran; i++){
        printf(" %s",data[i].id);
    }

    printf("\nWAIT");
    if(ukuran==1) printf(" 0");
    else {
    int n= 0;
    for (int i = 1;i<ukuran;i++){
        n += (ukuran-i)*data[i-1].durasi;
    }
    
    printf(" %d",n);
    }

}
