#include <iostream>
using namespace std;

class bangunDatar;

class PersegiPanjang
{
    public:
        void inputdata(bangunDatar &bd);
        void outputdata(bangunDatar &bd);
};

class bangunDatar {
    private:
        float panjang;
        float lebar;

        float hitungLuas() {
            return panjang * lebar;
        };
            
        float hitungKeliling() {
            return 2 * (panjang + lebar);
        };
    
    public:
        //untuk mengakses panjang dan lebar
        friend void PersegiPanjang::inputdata(bangunDatar &bd);
        //untuk mengakses fungsi
        friend void PersegiPanjang::outputdata(bangunDatar &bd);
        
};

void PersegiPanjang :: inputdata(bangunDatar &bd) {
        cout << " Masukkan panjang: ";
        cin >> bd.panjang;
        cout << " Masukkan lebar: ";
        cin >> bd.lebar;
        };

