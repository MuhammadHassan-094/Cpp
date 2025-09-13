#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    ifstream file("output.txt");
    string word;
    int count = 0;

    while (file >> word) {
        count++;
    }
    file.close();

    cout << "Number of words in file: " << count << endl;
    return 0;
}
