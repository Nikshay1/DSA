#include <bits/stdc++.h>
using namespace std;

int main() {
    // Creating a list (doubly linked list)
    list<int> ls;

    // Adding elements
    ls.push_back(1);      // Add at end
    ls.push_back(2);
    ls.emplace_back(3);   // Faster than push_back
    ls.push_front(0);     // Add at beginning
    ls.emplace_front(-1); // Faster than push_front

    // Accessing elements
    cout << "Front: " << ls.front() << endl;
    cout << "Back: " << ls.back() << endl;

    // Iterating through list
    for (int val : ls) {
        cout << val << " ";
    }
    cout << endl;

    // Removing elements
    ls.pop_back();   // Remove from end
    ls.pop_front();  // Remove from beginning

    // Insert at specific position
    auto it = ls.begin();
    advance(it, 2);
    ls.insert(it, 100);

    // Erase element at position
    ls.erase(it);

    // Size and clear
    cout << "Size: " << ls.size() << endl;
    ls.clear();
    cout << "Empty: " << ls.empty() << endl;

    // Other useful functions
    // ls.reverse() - reverse the list
    // ls.sort() - sort the list
    // ls.unique() - remove consecutive duplicates
    // ls.splice() - transfer elements from another list
    // ls.remove(value) - remove all occurrences of value

    return 0;
}
