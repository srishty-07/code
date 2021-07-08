// https://drive.google.com/drive/folders/1AeAex8bq4KTGBi5iaiX5cu4LWh7gDtZl
// first repeating element
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int N = 1e6+2;
    int idx[N];
    
    // initilaising idx arrray
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }
    
    // declaring minindex
    int minidx=INT_MAX;
    
    for(int i=0;i<n;i++){
        // checking if idx[a[i]] is eual to -1 or not agar hoga -1 ke equal to uske andar i ki value daldo varna minidx nikal do
        if(idx[a[i]]!=-1){
            minidx=min(minidx,idx[a[i]]);
        }
        else{
            idx[a[i]]=i;
        }
    }
    // agar hume ko minimum index ,ilta hi nahi matlab agar voh value int max  hi rehti hai to hum cout karenge -1
    
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
    cout<<minidx+1<<endl;
    }
    return 0;
}



// subaaray with given sum
/*MY APPROACH optimise it using 2 pointer

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int s;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int curr=0;
    for(int i=0;i<n;i++){
        curr=0;
        for(int j=i;j<n;j++){
            curr+=a[j];
            if(curr==s){
                cout<<i+1<<" "<<j<<endl;
            }
            
        }
    }

    return 0;
}
******************/