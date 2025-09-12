#include <iostream>
using namespace std;

void reverseString(string &s, int start, int end) {
    if (start >= end) return;
    swap(s[start], s[end]);
    reverseString(s, start + 1, end - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    reverseString(str, 0, str.size() - 1);
    cout << "Reversed string: " << str << endl;
    return 0;
}
