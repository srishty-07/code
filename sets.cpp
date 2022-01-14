#include <bits/stdc++.h>
using namespace std;
int main()
{
    //initialising set
    set<int> s;
    //manually inserting elemnets in set
    s.insert(12);
    s.insert(23);
    s.insert(23);
    s.insert(23);
    // set always store unique element in set and will be in ascending order
    //to store them in descending order we will use:-
    // set<int,greater<int>> s;

    /////////////////////// now taking input from user///////////////////////////
    // #include <iostream>
    // #include <unordered_set>
    //     int main()
    //     {   int A[] = {1, 2, 3, 4, 5};
    //         std::unordered_set<int> s;
    //         for (int i : A){
    //             s.insert(i);
    //         }
    //         for (int i : s){
    //             std::cout << i << " ";
    //         }
    //         return 0;
    //     }
//or directly put array in set using s.insert(a[i])
// int doUnion(int a[], int n, int b[], int m)  {
//         //code here
//        set<int>s;
//        for(int i=0;i<n;i++)
//        s.insert(a[i]);
//        for(int i=0;i<m;i++)
//        s.insert(b[i]);
//        return s.size();
//     }
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it;
    }
    cout << "elements of set s after deleting elements upto 10 \n ";
    s.erase(s.begin(), s.find(10));

    /*elements of set s after insertion:
        10 13 14 23 34 56
        lower bound of 13 : 13
        lower bound of 34 : 34
        upper bound of 13 : 14
        upper bound of 34 : 56 */
    cout << *s.lower_bound(13) << endl;
    cout << *s.lower_bound(34) << endl;
    cout << *s.upper_bound(13) << endl;
    cout << *s.upper_bound(34) << endl;

    // lower_bound( const x ):- Returns an iterator to the element x if it is found else, return the iterator to the next element of it.
    // upper_bound(const x) :- Returns an iterator to the first element after the element x .
    // emplace():-  this function is used to insert the new element into the set container, only if the element to be inserted is unique and does not already exist in the set.
    // swap():- This function is used to swap the content of the two sets, but the sets must be of the same type.
    // clear() :- Removes all elements from the set.  
}
//  All other properties of a && multiset && are the same as that of the set, the difference being it allows storage of the same multiple values.
/*Unordered_Set :
Unordered_set can stores elements in any order, with no specified order for storing elements. It generally depends upon the machine that you are using.
Stores unique elements, no duplicates allowed.
unordered_set uses the hash table for storing the element.*/

// Set is an STL container that stores sorted ( ascending or descending  ) and unique elements inside it. 
// Multiset also stores the element in a sorted manner, but it can also store duplicate values. 
// Unordered_Set stores the element in any manner, but it doesn’t store the identical values.