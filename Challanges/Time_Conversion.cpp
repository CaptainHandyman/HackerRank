#include <iostream>
#include <string>
using namespace std;

int h, m, s;
string _time;

void disassemble_time() {
    h = atoi(_time.substr(0, 2).c_str());
    m = atoi(_time.substr(3, 2).c_str());
    s = atoi(_time.substr(6, 2).c_str());
}

string get_type(string str) { return str.substr(8, 2); }

void calculate_time() {
    if (get_type(_time) == "PM" && h < 12)
        h += 12;
    else if (get_type(_time) == "AM" && h >= 12)
        h -= 12;
}

string convert_time_to_string() {
    string output;

    if (to_string(h).size() == 1)
        output += to_string(0) + to_string(h) + ':';
    else
        output += to_string(h) + ':';
    if (to_string(m).size() == 1)
        output += to_string(0) + to_string(m) + ':';
    else
        output += to_string(m) + ':';
    if (to_string(s).size() == 1)
        output += to_string(0) + to_string(s);
    else
        output += to_string(s);

    return output;
}

int main() {
    cin >> _time;

    disassemble_time();
    calculate_time();

    cout << convert_time_to_string() << endl;
}
