/******************************************************************************
find countpath 
*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int countpath(int s,int e,int n){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1;i<n;i++){
        count+=countpath(s+i,e,n);
    }
    return count;
}
int main()
{
    int start,end,len;
    cin>>start>>end>>len;
    cout<<countpath(start,end,len)<<endl;

    return 0;
}
