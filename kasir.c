#include <stdio.h>

void main(){
    float totalBelanja, hargaAkhir,diskon,ppn;

    printf("Masukan total belanja :");
    scanf("%f", &totalBelanja);

    if(totalBelanja>200000&&totalBelanja<5000000){
        diskon = totalBelanja * 0.1;
        hargaAkhir = totalBelanja -diskon;
    }
    else if(totalBelanja>=500000){
        diskon = totalBelanja * 0.15;
        hargaAkhir = totalBelanja - diskon;
    }
    ppn = hargaAkhir * 0.11;
    hargaAkhir = hargaAkhir + ppn;
    printf("\nDiskon: Rp%.2f",diskon);
    printf("\nPPN: Rp%.2f",ppn);
    printf("\nTotal Bayar: Rp%.2f",hargaAkhir);
}