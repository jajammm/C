#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pilihan, pengulangan;
    float rupiah, usd, dollar, euro, riyal, pound, ringgit;

    menu:
    system("CLS");
    printf("==============================================\n");
    printf("\tProgram Konversi Mata Uang \n");
    printf("==============================================\n");
    printf("1. Rupiah ke USD \n");
    printf("2. USD ke Rupiah \n");
    printf("3. Rupiah ke Euro \n");
    printf("4. Euro ke Rupiah \n");
    printf("5. Rupiah ke Real \n");
    printf("6. Real ke Rupiah \n");
    printf("7. Rupiah ke Pound Inggris \n");
    printf("8. Pound Inggris ke Rupiah \n");
    printf("9. Rupiah ke Ringgit \n");
    printf("10. Ringgit ke Rupiah \n");
    printf("==============================================\n");
    printf("\n");
    printf("Masukkan Pilihan Anda = "); scanf("%d", &pilihan);
    printf("==============================================\n");
    printf("\n");

    switch (pilihan)
    {
    case 1:
        printf("Konversi Rupiah ke USD \n");
        printf("----------------------------------------------\n");
        printf("Masukkan jumlah Rupiah = ");
        scanf("%f", &rupiah);
        usd = rupiah / 15620;
        printf("Rp. %.2f = %.2f USD \n", rupiah, usd);
        printf("Ketik 1 untuk mengulang program ketik 2 untuk mengakhiri program \n");
        scanf("%d", &pengulangan);
            if (pengulangan == 1){
                goto menu;
            }
            else if (pengulangan == 2){
                goto keluar;
            }
        break;
    case 2:
        printf("Konversi USD ke Rupiah \n");
        printf("----------------------------------------------\n");
        printf("Masukkan jumlah USD = ");
        scanf("%f", &dollar);
        rupiah = dollar * 15620;
        printf("%.2f USD = Rp. %.2f", dollar, rupiah);
        printf("Ketik 1 untuk mengulang program ketik 2 untuk mengakhiri program \n");
        scanf("%d", &pengulangan);
            if (pengulangan == 1){
                goto menu;
            }
            else if (pengulangan == 2){
                goto keluar;
            }
        break;
    case 3:
        printf("Konversi Rupiah ke Euro \n");
        printf("----------------------------------------------\n");
        printf("Masukkan jumlah Rupiah = ");
        scanf("%f", &rupiah);
        euro = rupiah / 15531;
        printf("Rp. %.2f = %.2f EUR", rupiah, euro);
        printf("Ketik 1 untuk mengulang program ketik 2 untuk mengakhiri program \n");
        scanf("%d", &pengulangan);
            if (pengulangan == 1){
                goto menu;
            }
            else if (pengulangan == 2){
                goto keluar;
            }
        break;
    case 4:
        printf("Konversi Euro ke Rupiah \n");
        printf("----------------------------------------------\n");
        printf("Masukkan jumlah Euro = ");
        scanf("%f", &euro);
        rupiah = euro * 15531;
        printf("%.2f EUR = Rp. %.2f", euro, rupiah);
        printf("Ketik 1 untuk mengulang program ketik 2 untuk mengakhiri program \n");
        scanf("%d", &pengulangan);
            if (pengulangan == 1){
                goto menu;
            }
            else if (pengulangan == 2){
                goto keluar;
            }
        break;
    case 5:
        printf("Konversi Rupiah ke Riyal \n");
        printf("----------------------------------------------\n");
        printf("Masukkan jumlah Rupiah = ");
        scanf("%f", &rupiah);
        riyal = rupiah / 4159;
        printf("Rp. %.2f = %.2f Riyal \n", rupiah, riyal);
        printf("Ketik 1 untuk mengulang program ketik 2 untuk mengakhiri program \n");
        scanf("%d", &pengulangan);
            if (pengulangan == 1){
                goto menu;
            }
            else if (pengulangan == 2){
                goto keluar;
            }
        break;
    case 6:
        printf("Konversi Riyal ke Rupiah \n");
        printf("----------------------------------------------\n");
        printf("Masukkan jumlah Riyal = ");
        scanf("%f", &riyal);
        rupiah = riyal * 4159;
        printf("%.2f Riyal = Rp. %.2f \n", riyal, rupiah);
        printf("Ketik 1 untuk mengulang program ketik 2 untuk mengakhiri program \n");
        scanf("%d", &pengulangan);
            if (pengulangan == 1){
                goto menu;
            }
            else if (pengulangan == 2){
                goto keluar;
            }
        break;
    case 7:
        printf("Konversi Rupiah ke Pound Inggris \n");
        printf("----------------------------------------------\n");
        printf("Masukkan jumlah Rupiah = ");
        scanf("%f", &rupiah);
        pound = rupiah / 17983;
        printf("Rp. %.2f = %.2f Pound \n", rupiah, pound);
        printf("Ketik 1 untuk mengulang program ketik 2 untuk mengakhiri program \n");
        scanf("%d", &pengulangan);
            if (pengulangan == 1){
                goto menu;
            }
            else if (pengulangan == 2){
                goto keluar;
            }
        break;
    case 8:
        printf("Konversi Pound Inggris ke Rupiah \n");
        printf("----------------------------------------------\n");
        printf("Masukkan jumlah Pound = ");
        scanf("%f", &pound);
        rupiah = pound * 17983;
        printf("%.2f Pound = Rp. %.2f \n", pound, rupiah);
        printf("Ketik 1 untuk mengulang program ketik 2 untuk mengakhiri program \n");
        scanf("%d", &pengulangan);
            if (pengulangan == 1){
                goto menu;
            }
            else if (pengulangan == 2){
                goto keluar;
            }
        break;
    case 9:
        printf("Konversi Rupiah ke Ringgit \n");
        printf("----------------------------------------------\n");
        printf("Masukkan jumlah Rupiah = ");
        scanf("%f", &rupiah);
        ringgit = rupiah / 3301;
        printf("Rp. %.2f = %.2f Ringgit \n", rupiah, ringgit);
        printf("Ketik 1 untuk mengulang program ketik 2 untuk mengakhiri program \n");
        scanf("%d", &pengulangan);
            if (pengulangan == 1){
                goto menu;
            }
            else if (pengulangan == 2){
                goto keluar;
            }
        break;
    case 10:
        printf("Konversi Ringgit ke Rupiah \n");
        printf("----------------------------------------------\n");
        printf("Masukkan jumlah Ringgit = ");
        scanf("%f", &ringgit);
        rupiah = ringgit * 3301;
        printf("%.2f Ringgit = Rp. %.2f \n", ringgit, rupiah);
        printf("Ketik 1 untuk mengulang program ketik 2 untuk mengakhiri program \n");
        scanf("%d", &pengulangan);
            if (pengulangan == 1){
                goto menu;
            }
            else if (pengulangan == 2){
                goto keluar;
            }
        break;
    default:
        printf("Pilihan Tidak Tersedia \n");
    }
    keluar:
    return 0;
}
