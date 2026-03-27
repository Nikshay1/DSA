#include <bits/stdc++.h>
using namespace std;

int main() {
    // Creating a deque (double-ended queue)
    deque<int> dq;

    // Adding elements
    dq.push_back(1);
    dq.push_back(2);
    dq.emplace_back(3);
    dq.push_front(0);
    dq.emplace_front(-1);

    // Accessing elements
    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;

    // Random access (unlike list)
    cout << "Element at index 2: " << dq[2] << endl;

    // Removing elements
    dq.pop_back();
    dq.pop_front();

    // Size
    cout << "Size: " << dq.size() << endl;

    // Iterating
    for (int val : dq) {
        cout << val << " ";
    }
    cout << endl;

    // Other functions (same as vector and list)
    // begin, end, rbegin, rend, clear, insert, size, swap, empty

    return 0;
}
