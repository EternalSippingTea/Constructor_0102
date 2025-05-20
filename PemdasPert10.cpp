// Buatlah program C++ dengan class Barang yang memiliki atribut: namaBarang,
// kodeBarang
// Program memiliki constructor berparameter
//untuk mengisi nilai namaBarang dan kodeBarang
// serta memiliki fungsi untuk menampilkan informasi barang.


#include <iostream>
using namespace std;

class Barang {
    public:
       Barang(string namaBarang, int kodeBarang);

};

Barang :: Barang(string namaBarang, int kodeBarang) {
    cout << " Constructor dengan Parameter " << endl;
    cout << " Nama Barang = " << namaBarang << endl;
    cout << " Kode Barang = " << kodeBarang << endl;
};

int main() {
    Barang ikea("Sofa", 4544);
    return 0;
}