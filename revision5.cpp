#include <iostream>
#include <fstream> // Pour ifstream
#include <string> // Pour getline
using namespace std;

int main() {
    ifstream fichier("notes.txt"); // Ouvrir le fichier en mode lecture
    ofstream fichierSortant("resultats.txt");
    string ligne; // Variable pour stocker chaque ligne lue

    if (fichier.is_open()) { // Vérifier si le fichier est ouvert avec succès

        fichier.close(); // Fermer le fichier après avoir terminé de le lire
    } else {
        cout << "Impossible d'ouvrir le fichier." << endl;
    }

    return 0;
}
