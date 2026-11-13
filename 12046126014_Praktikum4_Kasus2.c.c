/*
 *Program   : Sistem penilaian mahasiswa
 * Nama     : Muhamad Dira Anshori
 * NIM      : 12046126014
 * Deskripsi: for loop untuk hitung rata-rata,max, dan min
 */

#include <stdio.h>
int main() {

    int jumlah_mhs;
    float nilai, total = 0, rata;
    float max = 0, min = 100;

    printf("=== SISTEM PENILAIAN MAHASISWA SI ===\n");
    printf("Masukan jumlah mahasiswa: ");
    scanf("%d", &jumlah_mhs);

    for (int i = 1; i <= jumlah_mhs; i++) {
        printf(" Nilai mahasiswa ke-%d: ", i);
        scanf("%f", &nilai);

        total += nilai;  // akumulasi total nilai

        if (nilai > max) {
            max = nilai;
        }
        if (nilai < min) {
            min = nilai;
        }
    }

    rata = total / jumlah_mhs;

    printf("\n===========================\n");
    printf("   LAPORAN NILAI KELAS SI    \n");
    printf("=============================\n");
    printf("jumlah mahasiswa : %d\n", jumlah_mhs);
    printf("total nilai : %.2f\n", total);
    printf("rata rata kelas : %.2f\n", rata);
    printf("nilai tertinggi : %.2f\n", max);
    printf("nilai terendah : %.2f\n", min);
    printf("============================\n");

    return 0;
}