#include <bits/stdc++.h>
using namespace std;

int main() {
    // SET - stores sorted, unique elements in a balanced BST
    set<int> st;
    st.insert(5);     // {5}
    st.insert(2);     // {2, 5}
    st.insert(8);     // {2, 5, 8}
    st.insert(5);     // {2, 5, 8} (duplicate, not inserted)

    cout << "Set elements: ";
    for (int val : st) {
        cout << val << " ";
    }
    cout << endl;

    // Find element
    auto it = st.find(5);
    if (it != st.end()) {
        cout << "Found: " << *it << endl;
    }

    // Count occurrences (0 or 1 for set)
    cout << "Count of 2: " << st.count(2) << endl;

    // Erase by value
    st.erase(5);
    cout << "Size after erase: " << st.size() << endl;

    // Erase by iterator
    st.erase(st.find(2));

    // LOWER AND UPPER BOUND
    st.insert(2);
    st.insert(5);
    st.insert(10);

    auto lb = st.lower_bound(5);  // First element >= 5
    auto ub = st.upper_bound(5);  // First element > 5

    cout << "Lower bound of 5: " << *lb << endl;
    cout << "Upper bound of 5: " << *ub << endl;

    // MULTISET - allows duplicate elements
    multiset<int> ms;
    ms.insert(5);
    ms.insert(2);
    ms.insert(8);
    ms.insert(5);  // {2, 5, 5, 8} - duplicate allowed

    cout << "Multiset count of 5: " << ms.count(5) << endl;
    ms.erase(5);  // Removes ALL occurrences of 5
    ms.insert(5);
    ms.insert(5);
    ms.erase(ms.find(5));  // Removes only ONE occurrence

    // UNORDERED SET - uses hash table, not sorted
    unordered_set<int> ust;
    ust.insert(5);
    ust.insert(2);
    ust.insert(8);
    // Faster O(1) average operations, but no ordering
    // lower_bound/upper_bound not available

    return 0;
}
