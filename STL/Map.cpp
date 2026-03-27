#include <bits/stdc++.h>
using namespace std;

int main () { 
    map<int,int> mpp ; 
    // map<int , pair<int,int>> mpp ; 
    // map <pair<int,int> , int> mpp ; 

    /*
    unique key -> value pairs are stored in a balanced binary search tree (BST) and the keys are sorted in ascending order
    */

    mpp[1] = 2 ; 
    mpp.emplace(3,1) ; 
    mpp.insert({2,4}) ; 

    // {
    //     {1,2}
    //     {2,4}
    //     {3,1}
    // } stores key in sorted order 

    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl ; 
    }

    cout << mpp[1] ; 
    cout << mpp[5] ; 

    auto it = mpp.find(3) ; 
    cout << it->first << " " << it->second << endl ; 


    //MULTIMAP ; 
    //duplicate keys 

    //Unordered map : 
    // same as set and unordered set difference 

    
}