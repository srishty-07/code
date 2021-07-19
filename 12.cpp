// 3rd

/******************************************************************************

get all subset 
*******************************************************************************/

#include <iostream>

using namespace std;
int subsett(int arr[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i &(i<<j)){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<subsett(arr,n);
    // cout<<"Hello World";

    return 0;
}
