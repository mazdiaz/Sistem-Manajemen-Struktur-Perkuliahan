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

class Universitas {
private:
    Fakultas* head_fakultas;
public:
    Universitas() : head_fakultas(nullptr) {}

    void addFakultas() {
        // TODO
    }

    void addJurusan() {
        // TODO
    }

    void addKelas() {
        // TODO
    }

    void addMahasiswa() {
        // TODO
    }

    void displayAll() {
        // TODO
    }

    void infoMahasiswa() {
        // TODO
    }
};

void mainMenu() {
    std::cout << "\n=== SISTEM MANEJEMEN PERKULIAHAN ===\n";
    std::cout << "1. Add\n";
    std::cout << "2. Display\n";
    std::cout << ". \n";
    std::cout << "0. Exit\n";
    std::cout << "Masukan pilihan: ";
}

void addMenu() {
    std::cout << "\n1. Fakultas\n";
    std::cout << "2. Jurusan\n";
    std::cout << "3. Kelas\n";
    std::cout << "4. Mahasiwa\n";
    std::cout << "Masukan pilihan: ";
}

void displayMenu() {
    std::cout << "\n1. Display All\n";
    std::cout << "2. Info Mahasiwa\n";
    std::cout << "Masukan pilihan: ";
}

int main() {

    Universitas uni;
    bool running = true;

    while (running) {
        int op;
        
        mainMenu();
        std::cin >> op;
        std::cin.ignore(); // clear input buffer

        switch (op) {
        case 1:
            addMenu(); // Main menu
            std::cin >> op;
            std::cin.ignore();

            switch (op) { // User choose option 1(add)
                case 1:
                    uni.addFakultas();
                    break;
                case 2:
                    uni.addJurusan();
                    break;
                case 3:
                    uni.addKelas();
                    break;
                case 4:
                    uni.addMahasiswa();
                    break;
                default:
                    std::cout << "Invalid option!\n";
                    break;
            }
            break;

        case 2:
            displayMenu();
            std::cin >> op;
            std::cin.ignore();

            switch (op) {
                case 1:
                    uni.displayAll();
                    break;
                case 2:
                    uni.infoMahasiswa();
                    break;
                default:
                    std::cout << "Invalid option!\n";
                    break;
            }
            break;

        case 0:
            running = false;
            break;

        default:
            std::cout << "Invalid option!\n";
            break;
        }
    }

    return 0;
}
