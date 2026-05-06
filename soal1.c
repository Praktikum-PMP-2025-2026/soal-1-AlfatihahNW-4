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


int durasitotal(int n, pasien data[n]){
    if(n==1) return 0;

    else 
    data[n].durasi = data[n].durasi + durasitotal(n-1,data);
    return (data[n].durasi);
    
}
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
    int ho = durasitotal(ukuran,data);
    printf("%d",ho);}
}
