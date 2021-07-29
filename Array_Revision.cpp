// sum of all subarrays
// 1 2 2
// 1 12 122 2 22 2
// output- 1 3 5 3 4 2
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=0;
        for(int j=i;j<n;j++){
            ans+=a[j];
            cout<<ans<<" ";
        }
    }
    return 0;
}



// find no of record breaking day 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int mx=-1;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    a[n]=-1;
    if(n==1){
        cout<<"1"<<endl;
    }
    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx=max(mx,ans);
    }
    cout<<ans;
    return 0;
}



// longest arithmetic subarray
// input - 10 7 4 6 8 10 11
// output- 4
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int pd=a[1]-a[0];
    int len=2;
    int j=2;
    int ans=2;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        while(j<n){
            if(pd==a[j]-a[j-1]){
                len++;
            }
            else{
                pd=a[j]-a[j-1];
                len=2;
            }
            ans = max(ans,len);
            j++;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}
