/*
 *Program   : Game tebak angka
 * Nama     : Muhamad Dira Anshori
 * NIM      : 12046126014
 * Deskripsi: while loop untuk game tebak angka dengan petunjuk
 */
 #include <stdio.h>

 int main () {
    const int ANGKA_RAHASIA = 73;
    int tebakan =0;
    int jumlah_coba =0;

    printf("=== GAME TEBAK ANGKA ===\n");
    printf("saya punya angka rahasia anatara 1-100. \n");
    printf("coba tebak!\n\n");

    while (tebakan != ANGKA_RAHASIA) {
        printf("Masukan tebakan Anda: ");
        scanf("%d", &tebakan);
        jumlah_coba++;

        if (tebakan < ANGKA_RAHASIA) {
            printf("tebakan terlalu KECIL! coba lagi.\n\n");
        } else if (tebakan > ANGKA_RAHASIA) {
            printf("Tebakan terlalu BESAR! coba lagi.\n\n");
        } else {
            printf("\n*** SELAMAT! Anda benar! ***\n");
            printf("Angka rahasianya adalah: %d\n", ANGKA_RAHASIA);
        }
    }

    printf("\nAnda menebak sebanyak %d kali. \n", jumlah_coba);
    printf("Terima kasih sudah bermain!\n");

    return 0;
 }