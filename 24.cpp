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


/******************************************************************************
move all elements at last of the string
*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string moveAllx(string s,int n){
    if(n==0){
        return "";
    }
    char ch=s[0];
    string ros=moveAllx(s.substr(1),n-1);
    if(ch=='x'){
        return (ros+ch);
        // matlab agar humara jo pehle alphabet aa raha hai string ka agar voh x hai to 
        // hum return kar rahe hai ros(rest of string)+x matlab ab x at the end of the string 
        // x add ho jayenge
    }
    else{
        // aur agar nahi ata x to directly ros return kardenge with ch
        return (ch+ros);
        // matlab voh character vahi rahega last main nahi 
    }
}
int main()
{
    string s;
    getline(cin,s);
    int n=s.length();
    cout<<moveAllx(s,n);
    return 0;
}

