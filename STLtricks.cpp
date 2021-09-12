#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()));
    
    for(auto v: ans){
        for(auto i : v){
            cout<<i<<" ";
        }cout<<endl;
    }
    
    return 0;
}
// no of permutation using the inbuilt function 
// 1 2 3

// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1
