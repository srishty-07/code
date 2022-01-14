#include<iostream>
using namespace std;
int main()
{    
    int t;
    cin>>t;
    while(t--)
    {
        int x,l,r;
        cin>>x>>l>>r;
        int xorval=0;   //Number in range l to r with max XOR value
        int xormax=x;   //Max XOR value
        int rem=l;      //Make xorval be atleast l  
        for(int j=1<<30;j;j=j>>1)
        {
            
                int temp=xormax^j; 
                if(temp>xormax || rem-j>=0) 
                {   
                    if((xorval^j)<=r)
                    {
                        rem-=j;
                        xorval=xorval^j;
                        xormax=xormax^j;    
                    }    
                }
        }
        cout<<xormax<<endl;
    }
}