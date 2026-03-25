#include <bits/stdc++.h>
using namespace std;

int main () { 
    sort (a , a+n) ; 
    //sorts the array in ascending order

    sort(v.begin() , v.end()) ; 
    //sorts the vector in ascending order

    sort (a , a+n , greater<int>()) ;
    //sorts the array in descending order

    sort(v.begin() , v.end() , greater<int>()) ;
    //sorts the vector in descending order

    pair<int,int> a[] = {{1,2} , {2,1} , {4,1} };

    //sort it according to second element
    //if second element is same, then sort 
    //it according to first element but in descending order 

    //comparator function : 
    bool comp(pair<int,int> a , pair<int,int> b) {
        if (a.second == b.second) {
            return a.first > b.first ;  
        }
        else {
            return a.second < b.second ; 
        }
    }

    sort(a, a+3 , comp); // this comparator function is a boolean function. 

}