#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int countXor(int a[],int n,int m,int k){
    // we will check whether m is greater than n bcoz m is the no of times we will run the loop to calculate xor
    if(m<0 || m>=n){
        return -1;
    }
    // After every iteration, the length of the array is reduced by 1 which means after M operation
    // size of array will be N-M,if the index which we need to return is greater than or equal to 
    // size of the array after M operation (ie K>=N-M) ,hence we cannot perform operation and return -1.
    
    if(k>=(n-m) || k<0){
        return -1;
    }
    
    // we will iterate through the loop to do the xor
    for(int p=0;p<m;p++){
        // we will create a vector that will keep on updating
        
        vector<int>temp;
        
        // now iterarting in the array 
        for(int i=0;i<n;i++){
          int value = a[i]^a[i+1];
          
          temp.push_back(value);
            //hum ab jo xor karke ayega usko ek ek karke new array main push karte jayenge aur fir next iteration pe 
           //hum a[i] ki jo ab updated value hai usko hum a[i] ko assign kardenge ab jo value vala array tha voh new 
          //value ka xor karega aur yeh chalta rehega jab tak humari upar vali base condn satisfy na ho jaye
          
          a[i]=temp[i];
        }
    }
    int ans = a[k];
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m,k;
    cin>>m>>k;
    cout<<countXor(a,n,m,k);
    return 0;
}
