#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    // taking input in character array directly cin no no need of loop
    char a[n+1];
    cin>>a;
   
    bool ispallindrome=true;
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-1-i]){
            // n-1 matlab last element and -i ka matlab hai ki baar baar ek ek element pe peeche ana
            ispallindrome=false;
            break;
        }
    }

    if(ispallindrome==true){
        cout<<"pallindrome"<<endl;
    }
    else{
        cout<<"Not a pallindrome"<<endl;
    }
    return 0;
}


// to find lenght of longest word in a sentence and input taken via string
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    cin.ignore();
    int n = str.length();
    // to check longest word in a sentence
    int res=0;int currlen=0;
    for(int i=0;i<n;i++){
        if(str[i]!=' '){
            currlen++;
            
        }
        else{
            res=max(res,currlen);
            currlen=0;
        }
    }
   
    cout<<max(res,currlen);
    return 0;
}

// to find lenght of longest word in a sentence and input taken via charcter
