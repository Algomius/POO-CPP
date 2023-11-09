#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Personne {
    string nom;
    string prenom;
    int age;
    static int compteur;

    public :
    
        Personne(string n, string p, int a) {
            cout << "Je suis dans le constructeur classique" << endl;
            nom = n;
            prenom = p;
            age = a;
            compteur++;
        }

        Personne(const Personne& p) {
            cout << "Je suis dans le constructeur en copie" << endl;
            nom = p.nom;
            prenom = p.prenom;
            age = p.age;
            compteur++;
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
            compteur++;
        }

        static void affiche_nb_personne() {
            cout << "Nous avons cree " << compteur << " personnes" << endl;
        }

        virtual void affichage() {
            cout << "Mon nom est : " << nom << endl;
            cout << "Mon prenom est : " << prenom << endl;
            cout << "Mon age est : " << age << endl; 
        }

        ~Personne() {
            cout << "Je suis dans le destructeur de " << nom << endl;
        } 
};

class Salarie : public Personne {
    int niveau;

    public :
        Salarie(string n, string p, int a, int niv) : Personne(n, p, a) {
            niveau = niv;
        }

        void affichage() override {
            Personne::affichage();
            cout << "Mon niveau est : " << niveau << endl; 
        }
};

class Client : public Personne {
    string adresse;

    public :
        Client(string n, string p, int a, string adr) : Personne(n, p, a) {
            adresse = adr;
        }

        void affichage() override {
            Personne::affichage();
            cout << "Mon adresse est : " << adresse << endl; 
        }
};

class Fournisseur : public Personne {
    string telephone;

    public :
        Fournisseur(string n, string p, int a, string tel) : Personne(n, p, a)  {
            telephone = tel;
        }

        void affichage() override {
            Personne::affichage();
            cout << "Mon telephone est : " << telephone << endl; 
        }
};

int Personne::compteur = 0;
int main() {

    /*Personne b {"Marley", "Bob", 54};
    Personne a {b};
    Personne c {move(b)};
    c.affichage(); */



    /*Fournisseur *f = new Fournisseur ("Marley", "Bob", 54, "0102030405");
    Client *c = new Client ("Marley", "Bob", 54, "Rue de la paix");
    Salarie *s = new Salarie ("Marley", "Bob", 54, 2);

    vector<Personne *> v;
    v.push_back(f);
    v.push_back(c);
    v.push_back(s);

    for (auto i : v) {
        i->affichage();
    } */

    

    Personne p1 {"Marley", "Bob", 54};
    Personne p2 {"Marley", "Bob", 54};
    Personne p3 {"Marley", "Bob", 54};
    Personne p4 {"Marley", "Bob", 54};
    Personne p5 {"Marley", "Bob", 54};

    Personne::affiche_nb_personne();




}