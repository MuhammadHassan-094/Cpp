#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(5);
    q.push(10);
    q.push(15);

    cout << "Queue elements (FIFO): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}
