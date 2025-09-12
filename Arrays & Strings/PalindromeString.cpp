#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int i = 0, j = str.size() - 1;
    bool isPalindrome = true;

    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        cout << str << " is a Palindrome" << endl;
    else
        cout << str << " is Not a Palindrome" << endl;

    return 0;
}
