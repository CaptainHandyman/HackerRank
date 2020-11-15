#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, positive = 0, negative = 0, zeros = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int j = 0;
        cin >> j;

        if (j > 0)
            positive++;
        if (j < 0)
            negative++;
        if (j == 0)
            zeros++;
    }

    cout << setprecision(6) << (float)positive / n << endl;
    cout << setprecision(6) << (float)negative / n << endl;
    cout << setprecision(6) << (float)zeros / n << endl;
}
