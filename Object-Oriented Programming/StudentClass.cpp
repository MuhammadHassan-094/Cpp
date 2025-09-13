#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;
public:
    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
