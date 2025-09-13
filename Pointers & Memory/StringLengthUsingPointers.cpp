#include <iostream>
using namespace std;

int stringLength(const char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    cout << "Length of string: " << stringLength(str) << endl;
    return 0;
}
