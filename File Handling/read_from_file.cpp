#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("output.txt");
    string line;
    cout << "Contents of file:" << endl;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
    return 0;
}
