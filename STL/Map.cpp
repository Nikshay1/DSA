#include <bits/stdc++.h>
using namespace std;

int main() {
    // MAP - stores key-value pairs in sorted order by key (balanced BST)
    map<int, int> mpp;

    // Inserting elements
    mpp[1] = 2;           // Using [] operator
    mpp.emplace(3, 1);    // Using emplace
    mpp.insert({2, 4});   // Using insert

    // Elements are stored sorted by key: {1,2}, {2,4}, {3,1}
    cout << "Map elements: ";
    for (auto it : mpp) {
        cout << "{" << it.first << "," << it.second << "} ";
    }
    cout << endl;

    // Accessing values
    cout << "Value at key 1: " << mpp[1] << endl;
    cout << "Value at key 5 (default 0): " << mpp[5] << endl;  // Creates key 5 with value 0

    // Find element
    auto it = mpp.find(3);
    if (it != mpp.end()) {
        cout << "Found key " << it->first << " with value " << it->second << endl;
    }

    // Erase by key
    mpp.erase(2);

    // Size
    cout << "Size: " << mpp.size() << endl;

    // MULTIMAP - allows duplicate keys
    multimap<int, int> mmpp;
    mmpp.insert({1, 10});
    mmpp.insert({1, 20});  // Same key, different value - allowed

    // UNORDERED MAP - uses hash table, not sorted by key
    unordered_map<int, int> ump;
    ump[1] = 100;
    ump[2] = 200;
    // Faster O(1) average operations, but no ordering

    return 0;
}
