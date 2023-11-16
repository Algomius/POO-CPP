#include "Personne.h"

Personne::Personne(string n, string p, int a) {
    cout << "Je suis dans le constructeur classique" << endl;
    nom = n;
    prenom = p;
    age = a;
}

Personne::Personne(const Personne& p) {
    cout << "Je suis dans le constructeur en copie" << endl;
    nom = p.nom;
    prenom = p.prenom;
    age = p.age;
}

Personne::Personne(const Personne&& p) {
    cout << "Je suis dans le constructeur en deplacement" << endl;
    if (this != &p) {
        nom = std::move(p.nom);
        prenom = std::move(p.prenom);
        age = p.age;
    }
}

void Personne::affichage() {
    cout << "Mon nom est : " << nom << endl;
    cout << "Mon prenom est : " << prenom << endl;
    cout << "Mon age est : " << age << endl; 
}

Personne::~Personne() {
    cout << "Je suis dans le destructeur de " << nom << endl;
} 


void Personne::affiche_nb_personne() {
    cout << "Nous avons cree " << compteur << " personnes" << endl;
}









