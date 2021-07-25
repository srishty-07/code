// inclusion exclusion principle
// Find the number of numbers in the interval [1,n] which are divisible by a or b.
// matlab divisible by a or b 
// so it will be (no divisible by a) + (no divisble by b) - (no divisible by a and b)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int divisble(int n,int a,int b){
    int c1=n/a; //divisible by a
    int c2=n/b; //divisble by b
    int c3=n/(a*b); //divisble by both a and b
    
    return c1+c2-c3;
}
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisble(n,a,b)<<endl;

    return 0;
}


// find GCD or highest prime facter (hcf) using euclid i.e using incluson exclusion principle
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
    
    while(b!=0){
        int rem = a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b)<<endl;

    return 0;
}
