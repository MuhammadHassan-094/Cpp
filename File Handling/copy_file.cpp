#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("output.txt");
    ofstream dest("copy.txt");

    if (!source) {
        cout << "Source file not found!" << endl;
        return 1;
    }

    dest << source.rdbuf();
    cout << "File copied successfully!" << endl;

    source.close();
    dest.close();
    return 0;
}
