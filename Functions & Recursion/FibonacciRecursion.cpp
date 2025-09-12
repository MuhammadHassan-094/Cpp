#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter position (n): ";
    cin >> n;
    cout << n << "th Fibonacci number = " << fibonacci(n) << endl;
    return 0;
}
