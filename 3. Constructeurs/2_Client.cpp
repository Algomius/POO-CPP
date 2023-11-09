#include <string>
#include <iostream>
using namespace std;

class Client {
    string nom;
    string prenom;
    string adresse;

    public :
        Client(string n, string p, string a) {
            nom = n;
            prenom = p;
            adresse = a;
        }

        Client(string n, string p) {
            nom = n;
            prenom = p;
            adresse = "";
        }
};

int main() {
    Client c1 {"Doe","John","Rue de la paix"};
}