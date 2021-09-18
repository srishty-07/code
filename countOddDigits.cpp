#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int countDigit(long long n){
    return floor(log10(n)+1);
}
int main()
{
    long long n;
    cin>>n;
    int arr[]={9,9,909,909,90909};
    int power = countDigit(n);
    int value= pow(10,power);
    if(power%2==0){
        cout<<arr[power-1];
        return 0;
    }
    int remain=value-n;
    int v2= arr[power-1];
    int v3=v2-remain+1;
    cout<<v3;
    return 0;
}
