#include <iostream>
using namespace std;

int main() {
    int n, k, b, b_actual = 0;

    cin >> n >> k;

    int bill[n];

    for (int i = 0; i < n; i++)
        cin >> bill[i];

    cin >> b;

    bill[k] = -1;

    for (int i = 0; i < n; i++) {
        if (bill[i] != -1)
            b_actual += bill[i];
    }

    b_actual /= 2;

    if (b != b_actual)
        cout << b - b_actual << endl;
    else if (b == b_actual)
        cout << "Bon Appetit" << endl;
}
