#include "Fournisseur.h"

Fournisseur::Fournisseur(string n, string p, int a, string tel) : Personne(n, p, a)  {
    telephone = tel;
}

void Fournisseur::affichage() {
    Personne::affichage();
    cout << "Mon telephone est : " << telephone << endl; 
}

Fournisseur::~Fournisseur() {
    cout << "Je suis dans le destructeur fournisseur" << endl;
} 
