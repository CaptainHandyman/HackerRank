#include <iostream>
using namespace std;

int n, t;
string s;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        t++;
        for (int j = 0; j < n; j++) {
            if (j < n - t)
                s += ' ';
            else
                s += '#';
        }

        cout << s << endl;

        s = "";
    }
}
