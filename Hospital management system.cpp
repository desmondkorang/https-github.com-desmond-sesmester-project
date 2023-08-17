#include <iostream>
using namespace std;

class Patient {
private:
    string name;
    int age;
    string condition;
public:
    Patient(string n, int a, string c) {
        name = n;
        age = a;
        condition = c;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Condition: " << condition << endl;
    }
};

int main() {
    string name, condition;
    int age;

    // Get patient details from user
    cout << "Enter patient name: ";
    getline(cin, name);
    cout << "Enter patient age: ";
    cin >> age;
    cin.ignore(); // Ignore the newline character
    cout << "Enter patient condition: ";
    getline(cin, condition);

    // Create a patient object
    Patient patient(name, age, condition);

    // Display patient information
    cout << "Patient Information: " << endl;
    patient.displayInfo();

	return 0;
}
