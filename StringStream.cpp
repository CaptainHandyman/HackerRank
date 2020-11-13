#include <iostream>
#include <sstream>
using namespace std;

int get_number_count(string s) {
    int commas = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == ',')
            commas++;
    }
    commas++;

    return commas;
}

int main() {
    string s;

    cin >> s;

    stringstream ss(s.c_str());
    int numbers[get_number_count(s)], i = 0;
    char ch;

    while (ss >> numbers[i]) {
        ss >> ch;
        cout << numbers[i] << endl;
        i++;
    }
}
