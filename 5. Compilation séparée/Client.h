#include "Personne.h"
#include <string>

#ifndef CLIENT_H
#define CLIENT_H

class Client : public Personne {
    string adresse;

    public :
        Client(string n, string p, int a, string adr);
        void affichage() override;
        ~Client();
};

#endif