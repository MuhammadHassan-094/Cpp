#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> numbers = {5, 3, 8, 3, 1, 5, 7};

    cout << "Unique numbers in ascending order: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
