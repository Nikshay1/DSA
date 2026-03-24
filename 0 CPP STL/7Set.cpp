#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    It stores sorted and unique elements in a balanced binary search tree.
    */

    set<int> st;
    st.insert(5); // {5}
    st.insert(2); // {2, 5}
    st.insert(8); // {2, 5, 8}
    st.insert(5); // {2, 5, 8} (5 is already present in the set so it will not be inserted again)

    // {2, 5, 8}
    auto it = st.find(5);

    auto it1 = st.find(10); // it1 will be equal to st.end() because 10 is not present in the set

    st.erase(5); // {2, 8}

    // new count function in set :
    int cnt = st.count(2);

    auto it3 = st.find(2);
    st.erase(it3); // {8}

    // MULTISET :
    multiset<int> ms;
    ms.insert(5); // {5}
    ms.insert(2); // {2, 5}
    ms.insert(8); // {2, 5, 8}
    ms.insert(5); // {2, 5, 5, 8} (5 is already present in the multiset but it will be inserted again because multiset allows duplicate elements)


    ms.erase(5);           // {2, 8} (all the occurrences of 5 will be erased)
    int cnt = ms.count(5); // 0 (5 is not present in the multiset)

    ms.erase(ms.find(5));  // {2, 5, 8} (only one occurrence of 5 will be erased)


    auto it = ms.find(2);
    auto it2 = next(it, 2); // only if there are at least 2 elements ahead
    ms.erase(it, it2);

    // this will erase the elements from the range [ms.find(1) , ms.find(1)+2) (1 is not present in the multiset so it will not erase anything)



    //UNORDERED SET : 
    unordered_set<int> st;
    st.insert(5); // {5}
    st.insert(2); // {2, 5}
    st.insert(8); // {2, 5, 8}
    st.insert(5); // {2, 5, 8} (5 is already present in the unordered set so it will not be inserted again)
    //lower bound and upper bound functions are not present in unordered set because it does not store the elements in sorted order
    //all the other things are the same 

    
}