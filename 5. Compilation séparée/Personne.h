#include <string>
#include <iostream>
using namespace std;

#ifndef PERSONNE_H
#define PERSONNE_H

class Personne {
    string nom;
    string prenom;
    int age;
    static int compteur;

    public :
        Personne(string n, string p, int a);
        Personne(const Personne& p);
        Personne(const Personne&& p);
        virtual void affichage();
        static void affiche_nb_personne();
        ~Personne();
};

#endif