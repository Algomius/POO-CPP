#include <iostream>
#include <string>
using namespace std;

class Vecteur {
    double x;
    double y;

    public :
    Vecteur() {
        x = 0;
        y = 0;
    }

    Vecteur(double valX, double valY) {
        x = valX;
        y = valY;
    }

    double getX() {
        return x;
    }
    
    double getY() {
        return y;
    }

    /*void operator+(Vecteur v) {
        x += v.x;
        y += v.y;
    } */

    Vecteur operator+(Vecteur v) {
        Vecteur v1 {x + v.x, y+ v.y};
        return v1;
    }

    Vecteur operator+(double d) {
        Vecteur v1 {x + d, y+ d};
        return v1;
    }

    void operator-(Vecteur v) {
        x -= v.x;
        y -= v.y;    
    }

    Vecteur operator-() {
        Vecteur v {-x, -y};
        return v;
    }

    Vecteur& operator++() {   //++A
        x++;
        y++;
        return *this;
    }

    Vecteur operator++(int) { //A++
        Vecteur v = *this;
        x++;
        y++;
        return v;
    }

    bool operator==(Vecteur v) {
        return (x == v.getX() && y == v.getY());
    }

    bool operator!=(Vecteur v) {
        return (!operator==(v));
    }

    bool operator<(Vecteur v) {
        return (x < v.getX() || (x == v.getX() && y < v.getY()));
    }

    bool operator<=(Vecteur v) {
        return (x < v.getX() || (x == v.getX() && y <= v.getY()));
    }

    bool operator>(Vecteur v) {
        return (!operator<=(v));
    }

    bool operator>=(Vecteur v) {
        return (!operator<(v));
    }


    void affichage() {
        cout << x << " - " << y << endl;
    }


};

ostream& operator<<(ostream& os, Vecteur v) {
    os << v.getX() << " - " << v.getY();
    return os;
}

int main() {
    Vecteur v1 {3, 5};
    Vecteur v2 {2, 7};
    v1 + v2;

    v1.affichage();
    v1 - v2;
    v1.affichage();
    v1+(-v2);
    v1.affichage();

    Vecteur v3;
    v3 = v2 + v1;
    cout << v3 << endl;
    cout << v3 + 5 << endl;
    cout << v3++ << endl;
    cout << ++v3 << endl;
    cout << v3 << endl;

    cout << v2 << endl;
    cout << v3 << endl;
    cout << (v3 != v3) << endl;

}