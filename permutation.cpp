#include <iostream>
using namespace std;
void permutationn(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch = s[i]; //fixing one character and then permuataion to rest of the string
        string ros = s.substr(0,i)+s.substr(i+1);
        permutationn(ros,ans+ch);
    }
}
int main()
{
    string s;
    getline(cin,s);
    permutationn(s,"");
    return 0;
}
