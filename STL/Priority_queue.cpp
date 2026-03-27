#include <bits/stdc++.h>
using namespace std;

int main() {
    // Max Heap Priority Queue (default)
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    // Top element is always the maximum
    cout << "Top (max): " << pq.top() << endl;  // 10

    pq.pop();
    cout << "New top: " << pq.top() << endl;  // 8

    cout << "Size: " << pq.size() << endl;
    cout << "Empty: " << pq.empty() << endl;

    // Min Heap Priority Queue
    priority_queue<int, vector<int>, greater<int>> minPq;
    minPq.push(5);
    minPq.push(2);
    minPq.push(8);
    minPq.emplace(1);

    // Top element is always the minimum
    cout << "Min Heap Top: " << minPq.top() << endl;  // 1

    // Note: Priority queue doesn't support iteration or random access

    return 0;
}
