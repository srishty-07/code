// maximum subarray kisckstart

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
    
    int ans=2;
    int pd = a[1]-a[0];
    int j=2;
    int currLen = 2;
    
    while(j<n){
        if(pd == a[j]-a[j-1]){
            currLen++;
        }
        else{
            pd=a[j]-a[j-1];
            currLen=2;
        }
        ans=max(ans,currLen);
        j++;
    }
    cout << ans <<endl;
    return 0;
}
// https://drive.google.com/drive/folders/1-PNukHSuFB4NsmGI1U4772DBXr3eOoxR



// Record breaking day kisckstart

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    a[n] = -1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    int ans=0;
    int mx=-1;
    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx=max(mx,ans);
    }
    cout<<ans<<endl;
    return 0;
}
