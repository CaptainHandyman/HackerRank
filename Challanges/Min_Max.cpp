#include <algorithm>
#include <iostream>
using namespace std;

long long arr[5], a = 0, b = 0;
long long _min = 0, _max = 0;

int main() {
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    sort(arr, arr + 5);

    for (int i = 0; i < 4; i++)
        a += arr[i];
    for (int i = 1; i < 5; i++)
        b += arr[i];

    _min = min(a, b);
    _max = max(a, b);

    cout << _min << ' ' << _max << endl;
}
