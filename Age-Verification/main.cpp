#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    int age;
    cout << "Your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You have an access to join us!" << endl;
    } else if (0 <= age && age < 18) {
        cout << "You cannot join us!" << endl;
    } else {
       cout << "You have entered a wrong value!" << endl;
    }

    return 0;
}