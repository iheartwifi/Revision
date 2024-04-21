/*
Écrire un programme qui demande à l’utilisateur d’entrer une chaine de caractères d’un
maximum de 8 caracatères, ne contenant que des 0 et 1 (soit un nombre binaire) et qui affiche
son équivalent en décimal. On supposera que l’utilisateur ne se trompe pas et qu’il ne fait
rentrer que des 0 et 1 .
*/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main (){
char chaine[9];

cout << "Entrez  un nombre binaire (max. 8 bits): " << endl;
cin.getline(chaine,9);




cout << "La conversion en binaire est: " << endl;

}