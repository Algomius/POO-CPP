#include <string>
#include <iostream>
using namespace std;

class Balise {
    string balise;
    string contenu;

    public :

        Balise(string b, string c) {
            cout << "Je suis dans le constructeur classique" << endl;
            balise = b;
            contenu = c;
            cout << "<" << balise << ">" << endl;
            cout << contenu << endl;
        }

        Balise(const Balise& b) {
            cout << "Je suis dans le constructeur en copie" << endl;
            balise = b.balise;
            contenu = b.contenu;
            cout << "<" << balise << ">" << endl;
            cout << contenu << endl;
        }

        Balise(Balise&& b) {
            cout << "Je suis dans le constructeur en déplacement" << endl;
            if (this != &b) {
                balise = b.balise;
                contenu = b.contenu;
                b.balise = "";
                b.contenu = "";
            }
        }

        ~Balise() {
            cout << "</" << balise << ">" << endl;
        }
};


int main() {

    Balise b {"HTML", "Ceci est une page HTML"};
    Balise a {"BODY", "Ceci est le corps"};
    Balise d {a};
    Balise c {std::move(a)};
}