#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int *coin = new int[m];
    long *change = new long[n + 1];

    for (int i = 0; i < m; i++)
        cin >> coin[i];

    change[0] = 1;

    for (int i = 0; i < m; i++) {
        for (int j = coin[i]; j <= n; j++)
            change[j] += change[j - coin[i]];
    }

    cout << change[n];
}
