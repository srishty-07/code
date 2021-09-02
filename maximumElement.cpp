// other two unoptimised are via sorting and maping
// using moravoting algorithm - most optimised
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int majorityElement(int a[],int n){
    int el = a[0];//considering initial elemnt as majority elemnt
    int count = 1;//keeping initial count as 1 
    
    for(int i=1;i<n;i++){
        if(el == a[i]){
            count++;
        }
        else{
            count--;
        }
        if(count == 0){//matlab agar count -- hote hote zero ho jata hai tab hum dubara se agle element ko as initial element
        // lenge aur dubara saare steps karenge
            el = a[i];
            count = 1;
        }
    }
    return el;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<majorityElement(a,n);
    return 0;
}


// c++
// another case of same problem is when we have to return -1 when majority element doesnot exist

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int majorityElement(int a[],int n){
    int el =a[0];
    
    int count = 0;
    for(int i=0;i<n;i++){
        if(el == a[i]){
            count++;
        }
    }
    
    if(count> n/2){
        return el;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<majorityElement(a,n);
    return 0;
}
