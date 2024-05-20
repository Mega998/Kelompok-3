#include <iostream>
#include <string>

using namespace std;

struct Kehadiran {
    int pertemuan[14];
};

struct Mahasiswa {
    string nama;
    Kehadiran kehadiran;
    Mahasiswa* next;
};

void tambahMahasiswa(Mahasiswa*& head, const string& nama);
void tambahKehadiran(Mahasiswa* head, const string& nama, int pertemuan);
void cetakMahasiswa(Mahasiswa* head);
