#include <stdio.h>

#include <stdlib.h>

#define MAKS_JENIS_BUKU 50
#define MAKS_JUDUL_BUKU 50
#define MAKS_NAMA_PENULIS 50

//Deklarasi fungsi untuk meminimalisir error
void menu(void);
void tambah_buku(void);
void delete_buku(void);
void cari_buku(void);
void peminjaman(void);
void pengembalian(void);

//Struct?
typedef struct Buku {
  unsigned kode_buku, halaman, harga;
  char jenis_buku[50];
  char judul_buku[50];
  char penulis[50];
}
Buku;

int main(void) {
  //Tes
  menu();
  return 0;
}

void menu(void) {
  int pilihan;
  awal:
  system("cls");
  system("color 80")
  printf("Program Perpustakaan Universitas Udayana");
  scanf("%*[^\n]");
  fflush(stdin);

  printf("Menu program \n");
  printf("1. Add new book\n");
  printf("2. Delete book\n");
  printf("3. Search for book\n");
  printf("4. Peminjaman\n");
  printf("5. Pengembalian\n");
  printf("6. Exit\n");
  printf("Masukan pilihan: ");
  scanf("%i", & pilihan);
  fflush(stdin);

  switch (pilihan) {
  case 1:
    tambah_buku();
    break;
  case 2:
    delete_buku();
    break;
  case 3:
    cari_buku();
    break;
  case 4:
    peminjaman();
    break;
  case 5:
    pengembalian();
    break;
  case 6:
    exit(0);
    break;
  default:
    printf("Masukan input yang benar!");
    goto awal;
  }
}

void tambah_buku(void) {
  Buku tambahBuku = {
    0
  }; //Memanggil ke struct ke fungsi
  FILE * filePointer; //filepointer
  filePointer = fopen("Buku.bin", "ab+");

  system("cls");
  //Fungsi nambahin buku
  printf("Masukan detail buku dibawah...\n");
  printf("Kode buku   : ");
  fflush(stdin);
  scanf("%u", & tambahBuku.kode_buku);
  printf("Nama buku   : ");
  fflush(stdin);
  fgets(tambahBuku.judul_buku, MAKS_JUDUL_BUKU, stdin);
  printf("Penulis buku: ");
  fflush(stdin);
  fgets(tambahBuku.penulis, MAKS_NAMA_PENULIS, stdin);
  printf("Halaman     : ");
  scanf("%u", & tambahBuku.halaman);
  printf("Harga       : ");
  scanf("%u", & tambahBuku.harga);

  //Validasi input data

  //Write ke file
  fwrite( & tambahBuku, sizeof(tambahBuku), 1, filePointer);
  fclose(filePointer);
}

void delete_buku(void) {
  //Fungsi delete buku
  printf("Test");
}

void cari_buku(void) {
  //Fungsi cari buku
  printf("Test");
}

void peminjaman(void) {
  //Fungsi peminjaman
  printf("Test");
}

void pengembalian(void) {
  //Fungsi pengembalian
  printf("Test");
}
