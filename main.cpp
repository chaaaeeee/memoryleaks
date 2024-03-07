#include <iostream>

struct dataPasien {
    int id;
    int umur;
    std::string nama;
    std::string penyakit;
};

void daftarMenu() {
    std::cout << "1. " << std::endl;
    std::cout << "2. " << std::endl;
    std::cout << "3. " << std::endl;
    std::cout << "4. " << std::endl;
}

dataPasien* input() {
    dataPasien* arr = new dataPasien[100];

    int jumlah;
    std::cout << "berapa pasien? ";
    std::cin >> jumlah;

    for(int i = 0; i < jumlah; i++) {
        arr[i].id = i + 1;

        std::cin.ignore();
        std::cout << "nama? ";
        getline(std::cin, arr[i].nama);

        std::cout << "umur? ";
        std::cin >> arr[i].umur;

        std::cin.ignore();
        std::cout << "penyakit? ";
        getline(std::cin, arr[i].penyakit);
    };

    return arr;
}
    
int main() {
    int menu = 0;
    std::cout << "apa ?";
    std::cin >> menu;

    switch(menu) {
        case 1: {
                    dataPasien* arr = input();
                }break;
        case 2: 
                std::cout << "it breaks";
        case 3:
                break;
        case 4:
                break;
        default:
                break;
    }

    std::cout << "it just breaks" ;
    dataPasien* arr = arr;
    for(int i = 0; i < 2;i++) {
        std::cout << "id : " << arr[i].id << std::endl;
        std::cout << "nama : " << arr[i].nama << std::endl;
        std::cout << "umur : " << arr[i].umur << std::endl;
        std::cout << "penyakit : " << arr[i].penyakit << std::endl;
    }
    return 0;
}
