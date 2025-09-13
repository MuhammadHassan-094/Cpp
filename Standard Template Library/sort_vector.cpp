#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {4, 2, 9, 1, 5};
    sort(v.begin(), v.end());

    cout << "Sorted vector: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
