#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;

    cin >> n >> q;

    vector<int> arr[n], _arr[q];

    for (int i = 0; i < n; i++) {
        int j = 0;
        cin >> j;

        for (int p = 0; p < j; p++) {
            int k = 0;
            cin >> k;

            arr[i].push_back(k);
        }
    }

    for (int i = 0; i < q; i++) {
        for (int j = 0; j < 2; j++) {
            int k = 0;
            cin >> k;

            _arr[i].push_back(k);
        }
    }

    for(int i=0;i<q;i++)
    {
        if(_arr[i].at(0)<=n)
            cout << arr[_arr[i].at(0)].at(_arr[i].at(1)) << endl;
    }
}
