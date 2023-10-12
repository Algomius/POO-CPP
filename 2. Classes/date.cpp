#include <iostream>
using namespace std;

class Date {
    public: 
        int jour;
        int mois;
        int annee;

    Date(int j, int m, int a) {
        jour = j;
        mois = m;
        annee = a;
    }

    void affichage() {
        cout << "DATE " <<  jour << "/" << mois << "/" << annee << endl;
    }

    // attention, on ne vérifie pas si le jour existe dans le mois
    void ajouterMois(int m) {
        annee += (mois + m) / 12;
        mois = ((mois + m -1) % 12) + 1;
    }

    void ajouterAnnee(int a) {
        annee += a;
    }
};

int main() {
    Date d {1, 1, 2023};
    d.affichage();  

    d.ajouterMois(3);
    d.affichage(); 

    d.ajouterAnnee(5);
    d.affichage(); 

    d.ajouterMois(15);
    d.affichage(); 

}

