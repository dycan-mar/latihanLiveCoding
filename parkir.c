#include <stdio.h>

void main(){
    char jenisKendaraan;
    int durasi,tarif;

    printf("Masukan jenis Kendaraan dan durasi parkir dalam format jam : (M 1):");
    scanf("%c %d", &jenisKendaraan, &durasi);

    switch (jenisKendaraan)
    {
    case 'M':
    case 'm':
        tarif += 2000;
        tarif += --durasi * 1000;
        if(tarif>=10000)
            tarif = 10000;
        printf("Total Biaya: Rp %d", tarif);
        break;
    case 'C':
    case 'c':
        tarif += 5000;
        tarif += --durasi * 3000;
        if(tarif>=35000)
            tarif = 35000;
        printf("Total Biaya: Rp %d", tarif);
        break;
    default:
        printf("JENIS KENDARAAN TIDAK DIKENAL");
        break;
    }
}