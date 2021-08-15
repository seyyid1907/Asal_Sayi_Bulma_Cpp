#include <iostream>
using namespace std;
int main() {
    bool asalMi = true;
    int kadar;
    cout << "Kaca kadar olan asal sayilari almak istiyorsunuz : " << endl;
    cin >> kadar;
    for(int sayi = 2;sayi<kadar;sayi++){
        for(int bolme = 2;bolme<sayi;bolme++){
            if(sayi % bolme == 0){
                asalMi = false;
            }
        }if(asalMi == true){
            cout << sayi << endl;
        }
        asalMi= true;
    }
        return 0;
    }
