/******************************************************************************
print all possible permuatation of a string
input-'ABC'
output-
ABC    isme dekho pehle a fix hai aur fir bc ke permuataion hai fir b fix hai  ac ki permutation ho rakhi hai aur sme for c
ACB
BAC
BCA
CAB
CBA
*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void permutation(string s,string ans){
    
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }
    
    // loop for iterating the string we will fix element one by one and then find the ros and for the rmaining string we will 
    // calcualte the permuattion of that rest string
    
    for(int i=0;i<s.length();i++){
        
        char ch = s[i];  //fixing the character
        string ros = s.substr(0,i) + s.substr(i+1);
        // (0,i) matlab jab 0 se start hoga jiski length i jitni hogi + fir i se start hoga aur next vale main humne length nahi 
        // dalenge its not a comulsion
        permutation(ros,ans+ch);
    }
}
int main()
{
    string str;
    getline(cin,str);
    permutation(str,"");
    return 0;
}
