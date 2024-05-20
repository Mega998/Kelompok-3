#include "header.h"

int main() {
    Mahasiswa* head = NULL;
    int pilihan;
    string nama;
    int pertemuan;

    do {
    	cout << " ================================\n";
        cout << "|  		Menu:          	|\n ";
        cout << "================================\n";
        cout << "|1. Tambah Mahasiswa		|\n";
        cout << "|2. Tambah Kehadiran		|\n";
        cout << "|3. Cetak Data Mahasiswa	|\n";
        cout << "|0. Keluar			|\n";
        cout << " ================================\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
            	system("cls");
                cout << "Masukkan Nama Mahasiswa: ";
                cin >> nama;
                tambahMahasiswa(head, nama);
                break;
            case 2:
            	system("cls");
                cout << "Masukkan Nama Mahasiswa: ";
                cin >> nama;
                cout << "Masukkan Nomor Pertemuan (1-14): ";
                cin >> pertemuan;
                tambahKehadiran(head, nama, pertemuan);
                break;
            case 3:
            	system("cls");
                cetakMahasiswa(head);
                break;
            
            case 0:
                cout << "Terima Kasih Telah Menggunakan Program Kami <3 \n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 0);

    return 0;
}

