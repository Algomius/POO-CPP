#include <iostream>
using namespace std;

class Point {
    private: 
        int x;
        int y;

    public :
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void setX(int x)
    {
        if (x >= 0 && x <= 100) {
            this->x = x;
        }
    }

    void setY(int y)
    {
        if (y >= 0 && y <= 100) {
            this->y = y;
        }
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    void affichage() {
        cout << x << " - " << y << endl;
    }

    void translation(int decalageX, int decalageY) {
        this->x += decalageX;
        this->y += decalageY;
    }
};

int main() {
    Point p {5, 7};
    p.affichage();   

    Point p2{p};
    p2.affichage();

    p2.setX(18);
    p2.setY(45);
    p2.setY(145);
    p2.affichage();

    cout << "GET " << p2.getX() << " - " << p2.getY() << endl;

}

