#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 {1, 2, 3};
    vector<int> v2 {4, 5, 6};
    v2 = v1;
    cout << v2[0] << endl;
    v1 = move(v2);
    cout << v2[0] << endl;
}