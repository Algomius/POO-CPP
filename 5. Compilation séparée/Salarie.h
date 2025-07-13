#include <string>
#include "Personne.h"

#ifndef SALARIE_H
#define SALARIE_H

class Salarie : public Personne {
    int niveau;

    public :
        Salarie(string n, string p, int a, int niv);

        void affichage() override;
        ~Salarie();
};

#endif