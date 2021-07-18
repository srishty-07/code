/******************************************************************************

check the no is power of 2 or not using bitwise

*******************************************************************************/

#include <iostream>

using namespace std;
bool checksq(int n){
    // the number wchich is power of 2 has only one set bit example :16-100000;4-100;they have only one set bet(1) so 
    // we will do and of these numbers with n-1 which will result in ans having all zero if it is a power of 2 
    // so thats why we are returing !n&n-1 bcoz if it is power of 2 it will give 0 as ans and we will send !0 that is 1
    // meaning it is true 
    
    // we have done n && bcoz of the base case that is if n is zero then it will automaitaclly give 0 
    return(n && (!n&(n-1)) );
}
int main()
{
    int n;
    cin>>n;
    
    cout<<checksq(n);
    // cout<<"Hello World";

    return 0;
}
