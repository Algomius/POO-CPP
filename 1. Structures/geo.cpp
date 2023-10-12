#include <string>
#include <iostream>
using namespace std;

enum cardinaux {Nord, Sud, Est, Ouest};

struct geo {
    string nom;
    double longitude;
    char longitudeSens;
    double latitude;
    char latitudeSens;
};

struct geo lecture()
{
    struct geo g;

    cout << "Donnez le nom du point : " << endl;
    cin >> g.nom;
    cout << "Donnez la longitude du point : " << endl;
    cin >> g.longitude;
    cout << "Donnez le sens de la longitude : " << endl;
    cin >> g.longitudeSens;
    cout << "Donnez la latitude du point : " << endl;
    cin >> g.latitude;
    cout << "Donnez le sens de la latitude : " << endl;
    cin >> g.latitudeSens;

    return g;
}

void correctionNomAdresse(struct geo *g)
{
    cout << "Donnez le nouveau nom du point : " << endl;
    cin >> g->nom; 
}

void correctionNomReference(struct geo &g)
{
    cout << "Donnez le nouveau nom du point : " << endl;
    cin >> g.nom; 
}


void affichage(struct geo g)
{
    cout << g.nom << " - (" << g.longitude << " " << g.longitudeSens << " - " << g.latitude << " " << g.latitudeSens << ")" << endl;
}


int main()
{

    struct geo paris, madrid, londres;

    cout << "String : " << sizeof(string) << endl;
    cout << "Double : " << sizeof(double) << endl;
    cout << "Char : " << sizeof(char) << endl;
    cout << "Struct : " << sizeof(struct geo) << endl; 

    paris = lecture();
    //madrid = lecture();

    affichage(paris);
    //affichage(madrid);

    struct geo *p = &paris;

    cout << (*p).nom << " - " << p->longitude << endl;

    //correctionNomAdresse(&paris);
    correctionNomReference(paris);
    affichage(paris);

    enum cardinaux c1 = Nord;
    enum cardinaux c2 = c1;

    cout << c1 << " - " << c2 << endl;

}