// gcd using recusriin
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
    // example a=42 b=24 hume gcd nikalne keliye hum mod karte jayenge a nd b ka jab tak hume min value na mil jaye matlab
    // jab tak hume 0 na mil jaye eg 
    // 42 % 24 = 18 
    // a%b=rem aya uske baad humne b%rem hua iska matlab humne a=b kara aur b=rem kara 
    // 24 % 18 = 6
    // 18 % 6 = 0
    
    if(b==0){
        return b;
    }
    return (b,a%b);
}
// or if we want to write one line instead of if and return we will writr
// return a%b==0?b:GCD(b,a%b);
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b)<<endl;

    return 0;
}



// find power of the given no 
// gcd using recusriin
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int power(int n,int p){
    if(p==0){
        return 1;
    }
    int prevpow = power(n,p-1);
    return n*prevpow;
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<power(n,p)<<endl;

    return 0;
}
