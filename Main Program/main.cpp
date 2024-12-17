#include <iostream>

using std::string;

struct Mahasiswa {
    string nama;
    string NIM;
    Mahasiswa* next;

    Mahasiswa() : next(nullptr) {}
};

struct Kelas {
    string id_Kelas;
    Kelas* next;
    Mahasiswa* head_mahasiswa;

    Kelas() {
        next = nullptr;
        head_mahasiswa = nullptr;
    }
};

struct Jurusan {
    string nama_jurusan;
    Jurusan* next;
    Kelas* head_kelas; 

    Jurusan() {
        next = nullptr;
        head_kelas = nullptr;
    }
};

struct Fakultas {
    string nama_fakultas;
    Fakultas* next;
    Jurusan* head_jurusan;

    Fakultas() {
        next = nullptr;
        head_jurusan = nullptr;
    }
};

int main() {



    return 0;
}