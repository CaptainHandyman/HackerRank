#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

class Student {
  public:
    void input() {
        for (int i = 0; i < 5; i++)
            cin >> student_data.grades[i];
    }

    int calculateTotalScore() {
        int total_score = 0;

        for (int i = 0; i < 5; i++)
            total_score += student_data.grades[i];

        return total_score;
    }

  private:
    struct student_data {
        int grades[5];
    } student_data;
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++) {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++) {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score) {
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
