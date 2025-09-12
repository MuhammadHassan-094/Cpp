#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    set<int> unique(arr, arr + n);

    cout << "Array without duplicates: ";
    for (int x : unique) cout << x << " ";
    cout << endl;

    return 0;
}
