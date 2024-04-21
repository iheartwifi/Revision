#include <iostream>
using namespace std;

int main() {
    int nb = 0;
    int pair = 0;
    cout << "Entrez un nombre entier : " << endl;
    cin >> nb;

    cout << "Le nombre de facteurs pairs de " << nb << " est : " ;

    for (int i = 1; i <= nb; i++) {
        if (nb % i == 0 && i % 2 == 0) {
            cout << i << " ";
            pair++;
        }  
    }


    
    return 0;
}

