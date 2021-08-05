/******************************************************************************
Tower of Hanoi
*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void toh(int n,char src,char help,char dest){
    if(n==0){
        return;
    }
    toh(n-1,src,dest,help);
    cout<<"form "<<src<<" src "<<" to "<<dest<<" destination"<<endl;
    toh(n-1,help,src,dest);
}
int main()
{
    int n;
    cin>>n;
    toh(n,'A','B','C');

    return 0;
}


/******************************************************************************
 Remove duplicates
 input : aaaabbbeeecdddd
 output : abecd
*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string duplicates(string s,int n){
    if(n==0){
        return "";
    }
    char firstCh=s[0];  
    //first character of the string
    
    string ros = duplicates(s.substr(1),n-1); 
    
    //remaining string is stored in ros(rest of string) except the first charcter of the string 
    // bcoz that character is stored in firstCh and then we will compare both the initial character of the string and 
    // will check if they are same then we will return the remaining string and after if they are not same then we will return 
    // the full string that would be firstCh+ros
    if(firstCh==ros[0]){
        return ros;
    }
    else{
        return (firstCh + ros);
    }
}
int main()
{
    string s;
    getline(cin,s);
    int n=s.length();
    cout<<duplicates(s,n);
    return 0;
}
