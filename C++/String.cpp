#include <iostream>
using namespace std;

int main() {
    string a, b, t;

    cin >> a >> b;

    cout << a.size() << ' ' << b.size() << endl;
    cout << a + b << endl;

    char _t[2] = {a[0], b[0]};

    a[0] = _t[1];
    b[0] = _t[0];

    cout << a << ' ' << b << endl;
}
