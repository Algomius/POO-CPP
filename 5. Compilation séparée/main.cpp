#include <string>
#include <iostream>
#include <vector>
using namespace std;
#include "Personne.h"
#include "Fournisseur.h"
#include "Client.h"
#include "Salarie.h"

int Personne::compteur = 0;
int main() {

    /*Personne b {"Marley", "Bob", 54};
    Personne a {b};
    Personne c {move(b)};
    c.affichage(); */

    Fournisseur *f = new Fournisseur ("Marley", "Bob", 54, "0102030405");
    Client *c = new Client ("Marley", "Bob", 54, "Rue de la paix");
    Salarie *s = new Salarie ("Marley", "Bob", 54, 2);

    vector<Personne *> v;
    v.push_back(f);
    v.push_back(c);
    v.push_back(s);

    for (auto i : v) {
        i->affichage();
    }





}