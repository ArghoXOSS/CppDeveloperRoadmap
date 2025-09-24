#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Setter for name
    void setName(string n) {
        name = n;
    }

    // Getter for age
    int getAge() {
        return age;
    }

    // Setter for age
    void setAge(int a) {
        age = a;
    }

    // Display info
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Optional: test
int main() {
    Person p("Argho", 22);
    p.display();
    p.setAge(23);
    p.setName("ArghoXOSS");
    p.display();
    return 0;
}

