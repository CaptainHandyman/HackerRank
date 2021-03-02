#include <iostream>
using namespace std;

int main() {
    int n, m, output = 0;

    cin >> n >> m;

    int arr[n], _arr[m];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < m; i++)
        cin >> _arr[i];
    for (int i = 1; i <= 100; i++) {
        int _int = 1;

        for (int j = 0; j < n; j++) {
            if (i % arr[j] != 0)
                _int = 0;
        }
        for (int j = 0; j < m; j++) {
            if (_arr[j] % i != 0)
                _int = 0;
        }

        if (_int == 1)
            output++;
    }

    cout << output << endl;
}
