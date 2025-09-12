#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    map<int, int> freq;
    for (int i = 0; i < n; i++) freq[arr[i]]++;

    cout << "Frequencies:\n";
    for (auto &p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}
