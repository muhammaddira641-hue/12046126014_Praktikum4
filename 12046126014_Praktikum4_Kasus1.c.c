/*
 *Program   : Mencetak pola segitiga bintang
 * Nama     : Muhamad Dira Anshori
 * NIM      : 12046126014
 * Deskripsi: Nested for loop untuk pola segitiga bintang
 */
#include <stdio.h>
int main() {
        int N;

    printf("=== CETAK POLA SEGITIGA BIINTANG ===\n");
    printf("Masukan jumlah baris: ");
    scanf("%d", &N);

// Loop luar: mengatur baris (1 sampai N)
for (int i = 1; i <= N; i++) {
    // loop dalam: cetak bintang sebnayak i
    for (int j = 1; j <= i; j++) {
        printf("* ");
    }
    printf("\n"); // pindah ke baris baru
}

    return 0;
}