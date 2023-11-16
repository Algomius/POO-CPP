#include "Salarie.h"


Salarie::Salarie(string n, string p, int a, int niv) : Personne(n, p, a) {
    niveau = niv;
}

void Salarie::affichage() {
    Personne::affichage();
    cout << "Mon niveau est : " << niveau << endl; 
}
