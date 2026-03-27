#include <bits/stdc++.h>
using namespace std;

int main() {
    // Stack - LIFO (Last In First Out)
    /*
        |     3       |  <- top
        |     2       |
        |     1       |
        |.............|
    */

    stack<int> st;

    // Push elements
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);  // Faster than push

    // Access top element
    cout << "Top: " << st.top() << endl;

    // Size
    cout << "Size: " << st.size() << endl;

    // Pop element
    st.pop();
    cout << "New top: " << st.top() << endl;

    // Check if empty
    cout << "Empty: " << st.empty() << endl;

    // Note: Stack doesn't support iteration or random access

    return 0;
}
