#include "header.h"

void tambahMahasiswa(Mahasiswa*& head, const string& nama) {
    Mahasiswa* baru = new Mahasiswa;
    baru->nama = nama;
    baru->next = head;
    head = baru;
}

void tambahKehadiran(Mahasiswa* head, const string& nama, int pertemuan) {
    while (head != NULL) {
        if (head->nama == nama) {
            if (pertemuan >= 1 && pertemuan <= 14) {
                head->kehadiran.pertemuan[pertemuan - 1] = 1;
            }
            return;
        }
        head = head->next;
    }
    cout << "Mahasiswa tidak ditemukan!\n";
}

void cetakMahasiswa(Mahasiswa* head) {
    while (head != NULL) {
        cout << "Nama: " << head->nama << "\nKehadiran: ";
        for (int i = 0; i < 14; ++i) {
            cout << head->kehadiran.pertemuan[i] << " ";
        }
        cout <<endl;
        head = head->next;
    }
}
