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
