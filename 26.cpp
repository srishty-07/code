// generate all substring of a string
// https://www.youtube.com/watch?v=j9RG18jfnRY&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=47
// subsequence of a string
// input-'abc'
// output-' "" C B BC A AC AB ABC '


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    // hum subseq main 2 parameter bhejenge ek rest of the string aur ek ans string jo pehle empty thi aur fir ek main hum bhejenge 
    // aur ek main hum nahi bhejenge

    // ek baari jo humara ans that usme hum kuch nahi bhejenge
    subseq(ros,ans);
    // aur ek baari hum ans main ch add karenge 
    subseq(ros,ans+ch);
}
int main()
{
    string s;
    getline(cin,s);
    subseq(s,"");
    cout<<endl;
    return 0;
}


// generate all substring of a string with ascii value
// subsequence of a string
// input-'abc'
// output-' 
// "" 
// C
// 67
// B
// BC
// B67
// 66
// 66C
// 6667
// A
// AC
// A67
// AB
// ABC
// AB67
// A66
// A66C
// A6667
// 65
// 65C
// 6567
// 65B
// 65BC
// 65B67
// 6566
// 6566C
// 656667'
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    int code=ch;//ascii code of that char
    string ros = s.substr(1);
    // ek baari add kara
    subseq(ros,ans);
    // ek baari aad nahi kara
    subseq(ros,ans+ch);
    // aur ek baari ascii value add kari
    subseq(ros,ans+ to_string(code));
}
int main()
{
    string s;
    getline(cin,s);
    subseq(s,"");
    cout<<endl;
    return 0;
}


/******************************************************************************
print all possible word from phone digits 
*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string keypadArray[] = { "","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
void keypad(string s,string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }
    // extracting the first charcater from the string to get the rqd elemnt sfrom the array
    char ch = s[0];
    // sending that character from no string to get the rqd element 
    string code = keypadArray[ch - '0']; //-'0' is done tpo convert the character into int
    // now we will extract the rest of the string
    string ros = s.substr(1);
    
    // a loop for iterating all the lements till that code
    for(int i=0;i<code.length();i++){
        keypad(ros , ans+code[i]);
    }
}
int main()
{
    string s;
    getline(cin,s);
    keypad(s,"");
    cout<<endl;

    return 0;
}
