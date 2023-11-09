#include <string>
#include <iostream>
using namespace std;

int main() {
    /* Constructeur par défaut */
    string s1 {};

    /* Constructeur par paramètre */
    string s2 {"Coucou"};

    /* Constructeur par copie */
    string s3 {s2};

    /* Constructeur par déplacement */
    string s4 {std::move(s2)};

    cout << s1 << " - " << s2 << " - " << s3 << " - " << s4 << endl;
}