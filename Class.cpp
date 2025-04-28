#include <iostream>
using namespace std;

class Hewan
{
private:
    string jenisKelamin;

public:
    string tipe;
    string umur;

    void inputData()
    {
        cout << "Masukan jenis kelamin" << endl;
        cin >> jenisKelamin;
        cout << "Masukan tipe = " << endl;
        cin >> tipe;
        cout << "Masukan umur" << endl;
        cin >> umur;
    }

    void tampilHewan()
    {
        cout << "jenis kelaminnya adalah " << endl;
    }
};

int main()
{
    Hewan ambon;
    ambon.inputData();
    cout << "umurnya adalah " << ambon.umur << endl;
    cout << "tipenya adalah " << ambon.tipe << endl;
    ambon.tampilHewan();
}