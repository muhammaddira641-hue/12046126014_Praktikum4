/*
 *Program   : Menu Aplikasi kasir minimarket
 * Nama     : Muhamad Dira Anshori
 * NIM      : 12046126014
 * Deskripsi: do-while untuk menu + switch-case untuk pilihan
 */
#include <stdio.h>

int main() {
    int pilihan;
    float harga, jumlah, subtotal;
    float total_belanja = 0;

    printf("=== APLIKASI KASIR MINIMARKET SI ===\n");

    do {
        printf("\n=== MENU UTAMA ===\n");
        printf("1. tambah belanja\n");
        printf("2. lihat total belanja\n");
        printf("3. bayar & keluar\n");
        printf("pilih menu (1-3): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("\n-- tambah belanja --\n");
                printf("harga barang : Rp ");
                scanf("%f", &harga);
                printf("jumlah beli : ");
                scanf("%f", &jumlah);
                subtotal = harga * jumlah;
                total_belanja += subtotal;
                printf("subtotal : %.2f\n", subtotal);
                printf("(total belanja sementara: Rp %.2f)\n", total_belanja);
                break;
            case 2:
            printf("\nTotal belanja sementara: Rp %.2f\n", total_belanja);
            break;
            case 3:
            printf("\n=== PEMBAYARAN===\n");
            printf("Total yang harus dibayar: Rp %.2f\n", total_belanja);
            printf("terima kasih telah berbelanja!\n");
            break;
        default:
            printf("\nERROR : menu tidak tersedia. pilih 1-3 saja. \n");
        }
    }while (pilihan != 3);

    return 0;
}