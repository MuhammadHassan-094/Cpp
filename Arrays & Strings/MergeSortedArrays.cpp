#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter size of first array: ";
    cin >> n;
    int arr1[n];
    cout << "Enter elements of first array (sorted): ";
    for (int i = 0; i < n; i++) cin >> arr1[i];

    cout << "Enter size of second array: ";
    cin >> m;
    int arr2[m];
    cout << "Enter elements of second array (sorted): ";
    for (int i = 0; i < m; i++) cin >> arr2[i];

    int merged[n + m], i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) merged[k++] = arr1[i++];
        else merged[k++] = arr2[j++];
    }
    while (i < n) merged[k++] = arr1[i++];
    while (j < m) merged[k++] = arr2[j++];

    cout << "Merged sorted array: ";
    for (int x = 0; x < n + m; x++) cout << merged[x] << " ";
    cout << endl;

    return 0;
}
