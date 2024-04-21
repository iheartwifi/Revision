#include <iostream>

using namespace std;

void programme() {
    cout << "\n1. Entrer un nombre x\n";
    cout << "2. Calculer la factorielle de x\n";
    cout << "3. Calculer le terme x de la série de Fibonacci\n";
    cout << "4. Quitter le programme\n";
}

int main() {
    int choix;
    int nombre;
    long factoriel = 1;
    int terme_x;
    int terme_precedent = 0;
    int terme_actuel = 1;

    do {
        programme();

        cout << "\nChoix : ";
        cin >> choix;

        switch (choix) {
            case 1:
                cout << "Entrez un nombre x : ";
                cin >> nombre;
                break;
            case 2:
                if (nombre == 0) {
                    factoriel = 1;
                } else {
                    for (int i = 1; i <= nombre; ++i) {
                        factoriel *= i;
                    }
                }
                cout << "Factorielle de " << nombre << " : " << factoriel << endl;
                break;
            case 3:
                terme_x = 0;
                if (nombre == 0) {
                    terme_x = 0;
                } else if (nombre == 1) {
                    terme_x = 1;
                } else {
                    terme_precedent = 0;
                    terme_actuel = 1;
                    for (int i = 2; i <= nombre; ++i) {
                        terme_x = terme_precedent + terme_actuel;
                        terme_precedent = terme_actuel;
                        terme_actuel = terme_x;
                    }
                }
                cout << "Terme " << nombre << " de la série de Fibonacci : " << terme_x << endl;
                break;
            case 4:
                cout << "Programme terminé.\n";
                break;
            default:
                cout << "Choix invalide. Veuillez réessayer.\n";
        }
    } while (choix != 4);

    return 0;
}
