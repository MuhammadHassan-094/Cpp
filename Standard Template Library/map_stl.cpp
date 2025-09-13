#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> students;
    students[101] = "Ali";
    students[102] = "Hassan";
    students[103] = "Sara";

    cout << "Student Records:" << endl;
    for (auto &entry : students) {
        cout << "Roll No: " << entry.first << " -> Name: " << entry.second << endl;
    }
    return 0;
}
