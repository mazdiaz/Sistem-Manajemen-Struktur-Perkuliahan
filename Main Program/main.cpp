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
    Mahasiswa* head_mahasiswa; 

    Jurusan() {
        next = nullptr;
        head_mahasiswa = nullptr;
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

    std::cout << "Hello World!\n";

    return 0;
}
