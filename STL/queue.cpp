#include <bits/stdc++.h>
using namespace std;

int main() {
    // Queue - FIFO (First In First Out)
    queue<int> q;

    // Push elements
    q.push(1);
    q.push(2);
    q.emplace(4);  // Faster than push

    // Access front and back
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    // Size
    cout << "Size: " << q.size() << endl;

    // Pop element (removes from front)
    q.pop();
    cout << "New front: " << q.front() << endl;

    // Check if empty
    cout << "Empty: " << q.empty() << endl;

    // Note: Queue doesn't support iteration or random access

    return 0;
}
