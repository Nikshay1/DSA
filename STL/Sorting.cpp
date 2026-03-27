#include <bits/stdc++.h>
using namespace std;

// Comparator function for custom sorting
bool comp(pair<int, int> a, pair<int, int> b) {
    // Sort by second element ascending
    // If second elements are equal, sort by first element descending
    if (a.second == b.second) {
        return a.first > b.first;
    }
    return a.second < b.second;
}

int main() {
    // SORTING ARRAYS
    int arr[] = {5, 2, 8, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort array in ascending order
    sort(arr, arr + n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort array in descending order
    sort(arr, arr + n, greater<int>());
    cout << "Descending: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // SORTING VECTORS
    vector<int> v = {5, 2, 8, 1, 9};

    // Sort vector in ascending order
    sort(v.begin(), v.end());

    // Sort vector in descending order
    sort(v.begin(), v.end(), greater<int>());

    // CUSTOM SORTING - Sort pairs with comparator
    pair<int, int> p[] = {{1, 2}, {2, 1}, {4, 1}};
    int size = sizeof(p) / sizeof(p[0]);

    sort(p, p + size, comp);

    cout << "Sorted pairs: ";
    for (int i = 0; i < size; i++) {
        cout << "{" << p[i].first << "," << p[i].second << "} ";
    }
    cout << endl;

    return 0;
}
