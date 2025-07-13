#include "Client.h"

Client::Client(string n, string p, int a, string adr) : Personne(n, p, a) {
    adresse = adr;
}

void Client::affichage() {
    Personne::affichage();
    cout << "Mon adresse est : " << adresse << endl; 
}

Client::~Client() {
    cout << "Je suis dans le destructeur client" << endl;
} 
