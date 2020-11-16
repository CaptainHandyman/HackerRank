#include <iostream>
using namespace std;

int n, *arr;

int round(int t) {
    int _t = t;

    while (_t % 5 > 0) {
        _t++;
    }

    return _t;
}

int main() {
    cin >> n;

    arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] > 40) {
            if (round(arr[i]) - arr[i] < 3)
                arr[i] = round(arr[i]);
        } else if (arr[i] < 40 && arr[i] > 35 && round(arr[i]) - arr[i] < 3)
            arr[i] = round(arr[i]);

        cout << arr[i] << endl;
    }
}
