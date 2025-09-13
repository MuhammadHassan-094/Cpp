#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt");
    string text;
    cout << "Enter text to write into file: ";
    getline(cin, text);
    file << text;
    file.close();
    cout << "Data written successfully!" << endl;
    return 0;
}
