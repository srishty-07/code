/******************************************************************************
 check whether array is sorted or not using recursion
*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool sorted(int a[],int n){
    
    if(n==1){
        return 1;
    }
    // yeh baki ka array check karega
    bool restarray=sorted(a+1,n-1);
    return (a[0]<a[1] && restarray);
    // return statemnet main hai agar a[0]<a[1] aur baki ka array agar dono return true karte hai to array sorted hai
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    if(sorted(a,n)){
        cout<<"The array is sorted"<<endl;
    }   
    else{
        cout<<"The array is not sorted"<<endl;
    }

    return 0;
}


/******************************************************************************
 print no in increaing and decreasing order using recursion
*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void printI(int n){
    
    if(n==0){
        return;
    }
    printI(n-1);
    cout<<n<<" ";
}
void printD(int n){
    
    if(n==0){
        return;
    }
    cout<<n<<" ";
    
    printD(n-1);
}
int main()
{
    int n;
    cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    
    printD(n);
    cout<<endl;
    printI(n);

    return 0;
}
