/**
Écrire un programme qui demande à l’utilisateur d’entrer une chaine de caractères d’un
maximum de 8 caracatères, ne contenant que des 0 et 1 (soit un nombre binaire) et qui affiche
son équivalent en décimal. On supposera que l’utilisateur ne se trompe pas et qu’il ne fait
rentrer que des 0 et 1
*/

#include <iostream>
#include <cstring> // Pour strlen
#include <cmath> // Pour pow

using namespace std;

int main() {
    char chaine[9];
    int resultat = 0;

    cout << "Entrez un nombre binaire (max. 8 bits) : " << endl;
    cin.getline(chaine, 9);

    // Parcours de la chaîne de caractères de la fin vers le début
    for (int i = strlen(chaine) - 1, exposant = 0; i >= 0; --i, ++exposant) {
        // Conversion du caractère binaire en valeur entière ('0' -> 0, '1' -> 1)
        int chiffre = chaine[i] - '0';
        // Ajout du chiffre à la somme pondérée
        resultat += chiffre * pow(2, exposant);
    }

    cout << "\nLa conversion en décimal est : " << resultat << endl;

    return 0;
}
