#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i = n; i >= 1; i--) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) cout << ch++;
        cout << endl;
    }
    return 0;
}
