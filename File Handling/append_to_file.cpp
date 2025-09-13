#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt", ios::app);
    string text;
    cout << "Enter text to append: ";
    getline(cin, text);
    file << "\n" << text;
    file.close();
    cout << "Data appended successfully!" << endl;
    return 0;
}
