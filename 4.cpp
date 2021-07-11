// Pair Target Sum Problem
// tc=O(N)
#include <iostream>

using namespace std;
bool pairsum(int a[],int n,int k){
    int low=0;
    int high=n-1;
    while(low<high){
        if(a[low]+a[high]==k){
            
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(a[low]+a[high] > k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<pairsum(a,n,k)<<endl;
    return 0;
}
