#include <iostream>
#include <cstring> // Pour strlen
using namespace std;
/*
Écrire un programme qui lit 1 phrase d’un maximum de 80 caractères et un mot de 4 lettres. Ensuite, le
programme compte et affiche le nombre de lettres de a à f en majuscule ou en minuscule que contient la phrase
ainsi que le nombre de fois que le mot de 4 lettres se retrouve dans la phrase comme mot ou à l’intérieur d’un
mot.
*/

int main() {
    char input[81];
    char mot[5];
    int compteur = 0;
    int compteurMot = 0;

    cout << "Entrer une phrase d'un maximum de 80 caractères : " << endl;
    cin.getline(input, 81);

    cout << "Entrer un mot de 4 lettres : " ;
    cin.getline(mot, 5);

    for(int i = 0; i <= strlen(input) - strlen(mot); i++) {
        char maj = toupper(input[i]);
        char min = tolower(input[i]);

        if((maj >= 'A' && maj <= 'F') || (min >= 'a' && min <= 'f')) {
            compteur++;
        }

        // Comparer chaque caractère du mot avec la sous-chaîne de la phrase à partir de la position i
        int k;
        for(k = 0; k < strlen(mot); k++) {
            if(mot[k] != input[i + k]) {
                break; // Sortir de la boucle si un caractère ne correspond pas
            }
        }

        // Si tous les caractères du mot correspondent, incrémenter compteurMot
        if(k == strlen(mot)) {
            compteurMot++;
        }
    }

    cout << "Nombre de lettres de A à F : " << compteur << endl;
    cout << "Nombre d'apparitions du mot '" << mot << "' dans la phrase : " << compteurMot << endl;

    return 0;
}
