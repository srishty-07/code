// find unique no uisng bit manipulation

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int findUni(int a[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^a[i];
    }
    return xorsum;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<findUni(a,n)<<endl;
    
    return 0;
}

// find two non repeating unique number using bit manipulation

    // now we have find the right most bit now its time to seprate array into difft domains to find two unique no 
    // as they are unique so obviously as we get rightmost set bit as 1 so one will be 1 and other will be 0
    // thats why we have decided to seprate it into two parts one with rightmost bit as 1 and other with 0
    // and to differentaiate them in grp we will do & of these no with rightbit bcoz doing and will return that same no 
    // if done with 1 eg 1&1=1 0&1=0 so if we do & with 0 of our set bit that means it is not set and is off therefore
    // it will be another grp and if not it is set and then will be sent to another grp 
    // after segregation of grp xor will be done of both grp now only one elemnt out of each grp will be there 
    // hence printing two unique element

