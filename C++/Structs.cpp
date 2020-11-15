#include <iostream>
using namespace std;

struct student {
    int age;
    string first_name;
    string last_name;
    int standard;
} student;

int main() {
    cin >> student.age >> student.first_name >> student.last_name >>
        student.standard;

    cout << student.age << ' ' << student.first_name << ' ' << student.last_name
         << ' ' << student.standard;
}
