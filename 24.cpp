/******************************************************************************
reverse a string using recursion
*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(string str,int n)
{
	if(n == 0)
	{
		return;
	}
    // "abc"
    // str.substr(1) karne ke baad humare pass aya
    // "bc"
    // aur fir reverse chala (rest of the string ke liye that is bc)
    // firse substr aur fir aya 
    // "c"
    // ""-null
    // jaise ji null aya to base case hit hua aur return hua aur print hota gaya 
	
    string restOfString=str.substr(1);
    //yeh 1 ke badd ki string de dega
    
    reverse(restOfString,n-1);
	cout << str[0];
}

int main()
{
   string s;
   getline(cin,s);
   int len=s.length();
   reverse(s,len);

    return 0;
}


/******************************************************************************
replace all pi with 3.14 using recursion
*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void replace(string str,int n)
{
    if(n==0){
        return;
    }
    if(str[0]=='p' && str[1]=='i'){
        cout<<"3.14";
        // callinf for the rest of the string
        replace(str.substr(2),n-2);
    }
    else{
        cout<<str[0];
        replace(str.substr(1),n-1);
    }
}

int main()
{
   string s;
   getline(cin,s);
   int len=s.length();
   replace(s,len);

    return 0;
}
// input - pisrishpipisrishpipi
// output - 3.14srish3.143.14srish3.143.14
// https://drive.google.com/file/d/1UN0moEVSoWC-kNYucMnHnVurd1GEF0m8/view
