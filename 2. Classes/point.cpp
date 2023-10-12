#include <iostream>
using namespace std;

class Point {
    public: 
        int x;
        int y;
};

int main() {
    Point p {};
    p.x = 5;
    p.y = 7;

    cout << p.x << " - " << p.y << endl;
}

