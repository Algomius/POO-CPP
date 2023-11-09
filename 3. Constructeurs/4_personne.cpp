#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Personne {
    string nom;
    string prenom;
    int age;

    public :

        Personne(string n, string p, int a) {
            cout << "Je suis dans le constructeur classique" << endl;
            nom = n;
            prenom = p;
            age = a;
        }

        Personne(const Personne& p) {
            cout << "Je suis dans le constructeur en copie" << endl;
            nom = p.nom;
            prenom = p.prenom;
            age = p.age;
        }

        Personne(Personne&& p) {
            cout << "Je suis dans le constructeur en deplacement" << endl;
            if (this != &p) {
                nom = p.nom;
                prenom = p.prenom;
                age = p.age;
                p.nom = "";
                p.prenom = "";
                p.age = 0;
            }
        }

        void affichage() {
            cout << "Mon nom est : " << nom << endl;
            cout << "Mon prenom est : " << prenom << endl;
            cout << "Mon age est : " << age << endl; 
        }

        ~Personne() {
            cout << "Je suis dans le destructeur de " << nom << endl;
        } 
};


int main() {

    Personne b {"Marley", "Bob", 54};
    Personne a {b};
    Personne c {move(b)};
    c.affichage();

}