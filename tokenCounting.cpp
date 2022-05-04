// Program 3: WAP to count the number of tokens in a file.
// THEORY:
// A token is either a keyword, an identifier, a constant, a string literal, or a symbol. A program consists of various tokens. For Example: 
// 1) Keywords: 
// Examples- for, while, if etc.

// 2) Identifier
// Examples- Variable name, function name etc.

// 3) Operators:
// Examples- '+', '++', '-' etc.

// 4) Separators:
// Examples- ', ' ';' etc
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Hello World";
    ifstream in,in_word;
    ofstream out,out_word;
    string a;
    in.open("new.txt",ios::in);
    out.open("temp.txt");
    bool flag = false;
    while(!in.eof())
    {
        getline(in,a);
        if(a.find("/*") < a.length())
        {
            flag = true;
        }
        
        if(!flag)
        {
        for(int i=0;i<a.length();i++)
        {
            if((a.at(i)=='/')&&(a.at(i+1)=='/'))
            {
                break;
                cout<<"break at"<<a[i];
            }
            else
            {
                out<<a[i];
            }
        }
        out<<"\n";
        }
        if(flag)
        {
            if(a.find("*/") < a.length())
            {
                flag = false;
            }
        }
    }
    
    in.close();
    out.close();
    
    in_word.open("temp.txt");
    out_word.open("final.txt");
    string new_str;
    int token_count=0;
    while(!in_word.eof())
    {
        in_word >> new_str;
        token_count++;
        out_word << new_str<<"\n";
    }
    cout<<"\nNumber of token==>"<<token_count;
    in_word.close();
    out_word.close();
    return 0;
}

