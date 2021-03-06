#include <iostream>
using namespace std;

#define ARRAY_SIZE(x) sizeof(x) / sizeof(x[0])

int main() {
    int n, _min = 0, _max = 0;

    cin >> n;

    int arr[n], _arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    copy(arr, arr + ARRAY_SIZE(arr), _arr);

    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[i + 1])
            arr[i + 1] = arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1])
            _max++;
    }

    for (int i = 0; i < n; i++) {
        if (_arr[i] < _arr[i + 1])
            _arr[i + 1] = _arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (_arr[i] > _arr[i + 1])
            _min++;
    }

    cout << _max << ' ' << _min << endl;
}
