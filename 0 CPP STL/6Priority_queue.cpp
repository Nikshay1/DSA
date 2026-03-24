#include <bits/stdc++.h>
using namespace std;

int main () { 
    priority_queue<int> pq ; 
    pq.push(5) ; // {5}
    pq.push(2) ; // {5, 2}
    pq.push(8) ; // {8, 2, 5} (8 is the largest element and it will be at the top of the priority queue)
    cout << pq.top() << endl ; // 8
    pq.pop() ;
    cout << pq.top() << endl ; // 5

    // size swap empty function are the same as others 

    //minimum priority queue :
    priority_queue<int, vector<int> , greater<int>> minpq ;
    minpq.push(5) ; // {5}
    minpq.push(2) ; // {2, 5}
    minpq.push(8) ; // {2, 5, 8}
    cout << minpq.top() << endl ; // 2 

}