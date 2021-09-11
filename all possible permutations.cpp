// https://www.youtube.com/watch?v=28okqq8raXM&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=44
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void permutate(vector<int> &a,int idx){
    // base case
    if(idx ==  a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=idx;i<a.size();i++){
        swap(a[i],a[idx]);
        permutate(a,idx+1);
        swap(a[i],a[idx]);
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a){
        cin>>i;
    }
    permutate(a,0);
    for(auto v : ans){
        for(auto i : v){
            cout<<i<<" ";
        }cout<<endl;
    }
}
