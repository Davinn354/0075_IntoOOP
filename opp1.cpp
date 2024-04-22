#include <iostream>
using namespace std;

class bangunDatar{

    //akses modifier
    private:
        float Panjang, Lebar;
    public:
        float Luas;

        void input() { //methode input persegi panjang

            cout << "Masukan Panjangnya = ";
            cin >> Panjang;
            cout << "Masukan Lebarnya = ";
            cin >> Lebar;
        }

        float hitungLuas (){
            return Panjang * Lebar;
        }

        void display(){
            cout << "Panjangnya = " << Panjang << endl;
            cout << "Lebarnya = " << Lebar << endl;
            cout << "Luasnya = "<< hitungLuas() << endl;
        }
};

int main () {
    bangunDatar pp; //deklarasi objek pp dari class bagunDatar
    pp.input();
    pp.display();
    
    return 0;
}
