// count the possible no of triangles
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int countTriangles(int a[],int n){
    
    
    sort(a,a+n);
    int count=0;
    for(int i=n-1;i>=2;i--){
        int l = 0;
        int r = i-1;
        
        while(l<r){
           if(a[l]+a[r]>a[i]){
               count =  count + (r-l);
               r--;
               }
            else{
               l++;
               }
        }
        return count;
    }
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<countTriangles(a,n);
    return 0;
}
