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

/******************************************************************************
TILING PROBLEM
we have to calculate the no of ways to place a tile in a particular block and then move forward it can be both horizontal and vertical 
*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int noOfWays(int n){
    // base case
    if(n==1){
        return 1;
    }
    if(n<=0){
        return 0;
    }
    
    return noOfWays(n-2)+noOfWays(n-1);
    // n-1 = jab hum row main/matlab verticaly place kar liya
    // 2 case = jab hum 2 ko horizontal do to vertically place krarene
    // 3 case = jab hum sabko horizonatally place karenge
}
int main()
{
    int n;
    cin>>n;
    cout<<noOfWays(n);

    return 0;
}

/******************************************************************************
PAIRING PROBLEM
*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int noOfPairs(int n){
    if(n==1 || n==0 ||n==2){
        return n;
    }
    
    return noOfPairs(n-1)+noOfPairs(n-2)*(n-1);
    // (n-1):matlab jab humare pass ek hi insaan hai matlab no pairing,matlab jab humne apne nth person ko single chod diya hai tab n-1
    // (n-2):matlab pairing karenge aur humare pass pairing karne ke liye (n-1) options hai to we can choose any one of these n-1 people aur agar hum nth person ko kisi ke saath pair karengetab
    // therefore (n-1)*(n-2)
}
int main()
{
    int n;
    cin>>n;
    cout<<noOfPairs(n);

    return 0;
}
