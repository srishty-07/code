/******************************************************************************
find all possible paths present in an 2D array
*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int countPath(int n,int i,int j){
    if(i == n-1 && j == n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    
    // for counting total no of paths one will move in x direction another one will move in y direction
    return countPath(n,i+1,j)+countPath(n,i,j+1);
}
int main()
{
    int n,i,j;
    cin>>n>>i>>j;
    // i = starting pt of row
    // j = starting pt of column
    cout<<countPath(n,i,j);

    return 0;
}
