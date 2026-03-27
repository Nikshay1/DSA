#include <bits/stdc++.h>
using namespace std;

int main() {
    // Creating and adding elements to vector
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Accessing elements
    cout << v[0] << " " << v[1] << " " << v[2] << endl;

    // emplace_back - faster than push_back
    v.emplace_back(4);

    // Vector of pairs
    vector<pair<int, int>> v1;
    v1.push_back({1, 2});
    v1.emplace_back(3, 4);

    // Vector with initial size and value
    vector<int> v2(5, 10);  // 5 elements, all with value 10
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;

    // Iterators
    vector<int>::iterator it = v.begin();
    it++;
    cout << *it << endl;

    it = it + 2;
    cout << *it << endl;

    // Reverse iterators
    vector<int>::reverse_iterator rit = v.rbegin();
    cout << *rit << endl;

    // Accessing elements - different ways
    cout << v[0] << " " << v.at(0) << " " << v.back() << endl;

    // Printing vector using range-based for loop
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;

    // Erase single element
    v.erase(v.begin() + 1);

    // Erase range of elements [start, end)
    // v.erase(v.begin() + 2, v.begin() + 4);

    // Insert single element
    vector<int> v3(2, 100);  // {100, 100}
    v3.insert(v3.begin(), 300);  // {300, 100, 100}

    // Insert multiple copies
    v3.insert(v3.begin() + 1, 2, 10);  // {300, 10, 10, 100, 100}

    // Insert range from another vector
    vector<int> copy(2, 50);
    v3.insert(v3.begin(), copy.begin(), copy.end());

    // Size of vector
    cout << "Size: " << v.size() << endl;

    // Remove last element
    v.pop_back();

    // Swap contents of two vectors
    v1.swap(v2);

    // Clear entire vector
    v.clear();

    // Check if vector is empty
    cout << "Empty: " << v.empty() << endl;

    return 0;
}
