#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v; 
    v.push_back(1) ; 
    v.push_back(2) ; 
    v.push_back(3) ; 

    cout << v[0] << " " << v[1] << " " << v[2] << endl ; 

    v.emplace_back(4) ; 
    
    vector<pair<int,int>> v1;
    v1.push_back({1,2}) ;
    v1.emplace_back(3,4) ;

    vector<int> v2(5, 10) ;
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " " ;
    }

    vector<int>::iterator it = v.begin() ; 
    it++ ; 
    cout << *it << endl ;

    it = it + 2 ; 
    cout << *it << endl ;

    vector<int>::iterator it1 = v.end() ; 
    vector<int>::reverse_iterator it2 = v.rend(); 
    vector<int>::reverse_iterator it3 = v.rbegin() ; 
    //special case for reverse iterator
    //incrementing reverse iterator moves it backwards and decrementing it moves it forward. 


    cout << v[0] << " " << v.at(0) ; 
    cout << v.back() << endl ; 

    //simplest way of priting a vector : 
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " " ;
    }

    //using auto keyword to print a vector :
    for (auto it : v) {
        cout << it << " " ;
    }
}
