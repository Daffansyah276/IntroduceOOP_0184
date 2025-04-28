#include <iostream>
using namespace std;

class lingkaran
{
    public:
    double jarijari;
    double luaslingkarang;

    void inputData(){
        cout << "Masukan jarijari" << endl;
        cin >> jarijari;
        
    };

    double hitungluas()
    {
        return 3.14 * jarijari * jarijari;
    }


};
int main(){
    lingkaran bulat;
    bulat.inputData();
    cout << "luasnya adalah " << bulat.hitungluas() << endl;
    cout << endl;

}