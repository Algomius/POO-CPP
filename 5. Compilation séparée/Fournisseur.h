#include "Personne.h"
#include <string>

#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H

class Fournisseur : public Personne {
    string telephone;

    public :
        Fournisseur(string n, string p, int a, string tel);
        void affichage() override;
        ~Fournisseur();
};

#endif