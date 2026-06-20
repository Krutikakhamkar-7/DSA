#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    if (age < 18) {
        cout << "you're eligible for the job" << endl;
    } else if (age >= 18 && age < 65) {
        cout << "you're eligible for the job but retirement soon" << endl;
    } else {
        cout << "retirement time" << endl;
    }
    return 0;
}