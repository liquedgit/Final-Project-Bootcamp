#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Global Variabel
int total = 0;

// Prototype Function
int intro(int option);
void makanDimana();
int makananFunction();
int minumanFunction();
int penutupFunction();
void pilihanMenu();
void reset();
void pembayaran();

// Fungsi Utama
int main()
{

  int temp, optionTemp;
  optionTemp = intro(temp); // Masuk ke fungsi Intro
  if (optionTemp == 1)
  {

    makanDimana();
  }
  else if (optionTemp == 2)
  {
    printf("Okay sir/madam!! have a Good Day =D");
  }

  return 0;
}

// Fungsi Intro diawal
int intro(int returnValue)
{
  char yesOrNo;
  char logo[300];
  FILE *gambar = fopen("./Mekdi.txt", "r");
  while (fscanf(gambar, "%[^\n]\n", logo) != EOF)
  {
    printf("\t%s\n", logo);
  }
  FILE fclose(*gambar);

  printf("\t\t\t\t\t     Selamat datang di MEKDI !!\n");
  printf("\t\t\t    Tetap Menjaga Protokol Kesehatan dan Jangan Lupa Cuci Tangan\n");
  printf("========================================================================================================================\n");
  printf("\nApakah anda mau memesan ? (Y/N) ");
  scanf("%c", &yesOrNo);
  getchar();

  if (yesOrNo == 'Y' || yesOrNo == 'y')
  {
    system("cls");
    return 1;
  }

  else if (yesOrNo == 'N' || yesOrNo == 'n')
  {
    system("cls");
    return 2;
  }
}

//Take away atau makan tempat
void makanDimana()
{
  int i;
  char logo[300];
  FILE *gambar = fopen("./Mekdi.txt", "r");
  while (fscanf(gambar, "%[^\n]\n", logo) != EOF)
  {
    printf("\t%s\n", logo);
  }
  FILE fclose(*gambar);
  printf("\n========================================================================================================================\n");

  printf("\nSilahkan pilih\n");
  printf("1. Makan di tempat\n");
  printf("2. Take away\n");
  printf("3. Tidak jadi memesan\n");
  printf("\n========================================================================================================================\n");
  printf("\nSilahkan di isi [1|2|3] : ");
  scanf("%d", &i);

  switch (i)
  {
  case 1:
    system("cls");
    pilihanMenu();
    break;
  case 2:
    system("cls");
    pilihanMenu();
    break;
  default:
    system("cls");
    reset();
  }
  return;
}

//section menu makanan
int makananFunction()
{
  int jumlahPembelian;
  int choose;
  int MAX_LENGTH = 100;
  int NUM_STRINGS = 5;
  int MAX_LENGTH_2 = 100;
  int NUM_STRINGS_2 = 5;
  char logo[300];
  FILE *gambar = fopen("./Makanan.txt", "r");
  while (fscanf(gambar, "%[^\n]\n", logo) != EOF)
  {
    printf("\t\t\t\t\t%s\n", logo);
  }
  FILE fclose(*gambar);
  printf("\n========================================================================================================================\n");

  printf("\nMenu Makanan = \n");
  char makanan[NUM_STRINGS][MAX_LENGTH] = {{"1. Nasi Goreng"},
                                           {"2. Ayam Goreng"},
                                           {"3. Tempe Goreng"},
                                           {"4. Tahu Goreng"},
                                           {"5. Mie Goreng"}};

  char harga[NUM_STRINGS][MAX_LENGTH] = {{"	Rp 20.000,00"},
                                         {"	Rp 25.000,00"},
                                         {"	Rp 5.000,00"},
                                         {"	Rp 30.000,00"},
                                         {"	Rp 15.000,00"}};

  for (int i = 0; i < NUM_STRINGS; ++i)
  {
    printf("%s = %s\n", makanan[i], harga[i]);
  }
  printf("6. Kembali untuk memilih/menambah pesanan lain\n\n");
  printf("\n========================================================================================================================\n");
  printf("\nPilih makanan yang akan dipesan [1|2|3|4|5|6] : \n");
  scanf("%d", &choose);

  switch (choose)
  {

  case 1:
    printf("Berapa banyak jumlah pesanan ?\n");
    scanf("%d", &jumlahPembelian);
    getchar();
    total += (jumlahPembelian * 20000);
    system("cls");
    makananFunction();
    break;

  case 2:
    printf("Berapa banyak jumlah pesanan ?\n");
    scanf("%d", &jumlahPembelian);
    getchar();
    total += (jumlahPembelian * 25000);
    system("cls");
    makananFunction();
    break;

  case 3:
    printf("Berapa banyak jumlah pesanan ?\n");
    scanf("%d", &jumlahPembelian);
    getchar();
    total += (jumlahPembelian * 5000);
    system("cls");
    makananFunction();
    break;

  case 4:
    printf("Berapa banyak jumlah pesanan ?\n");
    scanf("%d", &jumlahPembelian);
    getchar();
    total += (jumlahPembelian * 30000);
    system("cls");
    makananFunction();
    break;

  case 5:
    printf("Berapa banyak jumlah pesanan ?\n");
    scanf("%d", &jumlahPembelian);
    getchar();
    total += (jumlahPembelian * 15000);
    system("cls");
    makananFunction();
    break;

  case 6:
    system("cls");
    pilihanMenu();
    break;
  }
  return 0;
}

//section menu minuman

int minumanFunction()
{
  int jumlahBeli;
  int pilih;
  int MAX_LENGTH = 100;
  int NUM_STRINGS = 5;
  int MAX_LENGTH_2 = 100;
  int NUM_STRINGS_2 = 5;
  char logo[300];
  FILE *gambar = fopen("./Minuman.txt", "r");
  while (fscanf(gambar, "%[^\n]\n", logo) != EOF)
  {
    printf("\t\t\t\t\t%s\n", logo);
  }
  FILE fclose(*gambar);
  printf("\n========================================================================================================================\n");

  printf("\nMenu Minuman = \n");
  char minuman[NUM_STRINGS][MAX_LENGTH] = {{"1. Air Mineral"},
                                           {"2. Soda"},
                                           {"3. Teh Botol"},
                                           {"4. Fruit Tea"},
                                           {"5. Teh tarik"}};

  char harga[NUM_STRINGS][MAX_LENGTH] = {{"  Rp 8.000,00"},
                                         {"  Rp 15.000,00"},
                                         {"  Rp 6.000,00"},
                                         {"  Rp 9.000,00"},
                                         {"  Rp 20.000,00"}};

  for (int i = 0; i < NUM_STRINGS; ++i)
  {
    printf("%s \t= %s\n", minuman[i], harga[i]);
  }
  printf("6. Kembali untuk memilih/menambah pesanan lain\n\n");
  printf("\n========================================================================================================================\n");
  printf("\nPilih minuman yang akan dipesan [1|2|3|4|5|6] : \n");
  scanf("%d", &pilih);
  getchar();
  switch (pilih)
  {

  case 1:
    printf("Berapa banyak jumlah pesanan ?\n");
    scanf("%d", &jumlahBeli);
    getchar();
    total += (jumlahBeli * 8000);
    system("cls");
    minumanFunction();
    break;

  case 2:
    printf("Berapa banyak jumlah pesanan ?\n");
    scanf("%d", &jumlahBeli);
    getchar();
    total += (jumlahBeli * 15000);
    system("cls");
    minumanFunction();
    break;

  case 3:
    printf("Berapa banyak jumlah pesanan ?\n");
    scanf("%d", &jumlahBeli);
    getchar();
    total += (jumlahBeli * 6000);
    system("cls");
    minumanFunction();
    break;

  case 4:
    printf("Berapa banyak jumlah pesanan ?\n");
    scanf("%d", &jumlahBeli);
    getchar();
    total += (jumlahBeli * 9000);
    system("cls");
    minumanFunction();
    break;

  case 5:
    printf("Berapa banyak jumlah pesanan ?\n");
    scanf("%d", &jumlahBeli);
    getchar();
    total += (jumlahBeli * 20000);
    system("cls");
    minumanFunction();
    break;

  case 6:
    system("cls");
    pilihanMenu();
    break;
  }
  return 0;
}

//section menu Penutup

int penutupFunction()
{
  int jumlahPembelian;
  int pilih;
  int MAX_LENGTH = 100;
  int NUM_STRINGS = 5;
  int MAX_LENGTH_2 = 100;
  int NUM_STRINGS_2 = 5;
  char logo[300];
  FILE *gambar = fopen("./Penutup.txt", "r");
  while (fscanf(gambar, "%[^\n]\n", logo) != EOF)
  {
    printf("\t\t\t\t\t%s\n", logo);
  }
  FILE fclose(*gambar);
  printf("\n========================================================================================================================\n");

  printf("\nMenu Makanan Penutup = \n");
  char makananPenutup[NUM_STRINGS][MAX_LENGTH] = {{"1. Eskrim"},
                                                  {"2. Jagung Rebus"},
                                                  {"3. Apple Pie "},
                                                  {"4. Choco Pie"},
                                                  {"5. Eskrim Dua Rasa"}};

  char harga[NUM_STRINGS][MAX_LENGTH] = {{"Rp 10.000,00"},
                                         {"Rp 8.000,00"},
                                         {"Rp 10.000,00"},
                                         {"Rp 10.000,00"},
                                         {"Rp 15.000,00"}};

  for (int i = 0; i < NUM_STRINGS; ++i)
  {
    printf("%s  = %s\n", makananPenutup[i], harga[i]);
  }
  printf("6. Kembali untuk memilih/menambah pesanan lain\n\n");
  printf("\n========================================================================================================================\n");
  printf("\nPilih makanan penutup yang akan dipesan [1|2|3|4|5|6] : \n");
  scanf("%d", &pilih);
  getchar();
  switch (pilih)
  {
  case 1:
    printf("Berapa banyak jumlah pesanan ?\n");
    scanf("%d", &jumlahPembelian);
    getchar();
    total += (jumlahPembelian * 10000);
    system("cls");
    penutupFunction();
    break;

  case 2:
    printf("Berapa banyak jumlah pesanan ?\n");
    scanf("%d", &jumlahPembelian);
    getchar();
    total += (jumlahPembelian * 8000);
    system("cls");
    penutupFunction();
    break;

  case 3:
    printf("Berapa banyak jumlah pesanan ?\n");
    scanf("%d", &jumlahPembelian);
    getchar();
    total += (jumlahPembelian * 10000);
    system("cls");
    penutupFunction();
    break;

  case 4:
    printf("Berapa banyak jumlah pesanan ?\n");
    scanf("%d", &jumlahPembelian);
    getchar();
    total += (jumlahPembelian * 10000);
    system("cls");
    penutupFunction();
    break;

  case 5:
    printf("Berapa banyak jumlah pesanan ?\n");
    scanf("%d", &jumlahPembelian);
    getchar();
    total += (jumlahPembelian * 15000);
    system("cls");
    penutupFunction();
    break;

  case 6:
    system("cls");
    pilihanMenu();
    break;
  }
  return 0;
}

//pilihan jenis menu
void pilihanMenu()
{

  int choose;
  char logo[300];
  FILE *gambar = fopen("./Menu.txt", "r");
  while (fscanf(gambar, "%[^\n]\n", logo) != EOF)
  {
    printf("\t\t%s\n", logo);
  }
  FILE fclose(*gambar);
  printf("\n========================================================================================================================\n");

  printf("\nSilahkan dipilih\n");
  printf("1. Makanan \n");
  printf("2. Minuman\n");
  printf("3. Makanan Penutup\n");
  printf("4. Selesai & Lakukan Pembayaran\n");
  printf("\n========================================================================================================================\n");
  printf("\nSilahkan di isi [1|2|3|4] : ");
  scanf("%d", &choose);
  getchar();

  switch (choose)
  {
  case 1:
    system("cls");
    makananFunction();
    break;
  case 2:
    system("cls");
    minumanFunction();
    break;
  case 3:
    system("cls");
    penutupFunction();
    break;
  case 4:
    system("cls");
    pembayaran();
  }
}

void pembayaran()
{
  char optionPembayaran;
  char logo[300];
  FILE *gambar = fopen("./Checkout.txt", "r");
  while (fscanf(gambar, "%[^\n]\n", logo) != EOF)
  {
    printf("\t\t\t\t\t%s\n", logo);
  }
  FILE fclose(*gambar);
  printf("\n========================================================================================================================\n");

  printf("\nTotal pembayaran kamu : Rp. %d\n\n", total);
  printf("========================================================================================================================\n");
  printf("Silahkan pilih metode pembayaran :\n");
  printf("1. Layanan pembayaran OVO\n");
  printf("2. Virtual Account BCA\n");
  printf("3. Pembayaran di kasir\n\n");

  printf("Tidak jadi membeli ? [Y]\n");
  printf("\nSilahkan di isi [1|2|3|4|Y] : ");

  scanf("%c", &optionPembayaran);
  if (optionPembayaran == '1')
  {
    system("cls");
    char barcode[1000];
    FILE *gambar_barcode = fopen("./Barcode.txt", "r");
    while (fscanf(gambar_barcode, "%[^\n]\n", barcode) != EOF)
      ;
    {
      printf("\n%s\n", barcode);
    }
    printf("Silahkan Scan Barcode Diatas\n\n");

    printf("Nomor antrian anda : %d", rand() % 500);
  }
  else if (optionPembayaran == '2')
  {
    system("cls");
    printf("Virtual Account BCA : 1790194566\n");
    printf("Nomor antrian anda : %d", rand() % 500);
  }
  else if (optionPembayaran == '3')
  {
    system("cls");
    printf("Silahkan melakukan pembayaran di kasir dengan no antrian : %d", rand() % 500);
  }
  else if (optionPembayaran == 'Y')
  {
    system("cls");
    reset();
  }
}

void reset()
{

  getchar();
  system("cls");
  total = 0;
  main();
}

