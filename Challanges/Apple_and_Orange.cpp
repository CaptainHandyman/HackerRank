#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int s, t, a, b, c, d, *arr, *_arr, out[2];

int main() {
    cin >> s >> t >> a >> b >> c >> d;

    arr = new int[c];
    _arr = new int[d];

    for (int i = 0; i < c; i++) {
        cin >> arr[i];

        if (arr[i] > 0) {
            if (a + arr[i] >= s && a + arr[i] <= t)
                out[0]++;
        } else {
            if (a - abs(arr[i]) >= s && a - abs(arr[i]) <= t)
                out[0]++;
        }
    }

    for (int i = 0; i < d; i++) {
        cin >> _arr[i];

        if (_arr[i] > 0) {
            if (b + _arr[i] >= s && b + _arr[i] <= t)
                out[1]++;
        } else {
            if (b + _arr[i] >= s && b + _arr[i] <= t)
                out[1]++;
        }
    }

    cout << out[0] << endl << out[1] << endl;
}
