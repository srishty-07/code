// https://leetcode.com/problems/broken-calculator/
// leetcode soln
class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int X = startValue;
        int Y = target ;
        int ans = 0;
        while (Y > X) {
            ans++;
            if (Y % 2 == 1)
                Y++;
            else
                Y /= 2;
        }

        return ans + X - Y;
    }
};

/******************************************************************************
TC-O(log n)
recursive approach
input - 
4
2 3
5 8
3 10
1024 1

output-
2
2
3
1023
*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int brokenCalc(int startValue, int target) {
    if(startValue>=target){
        return startValue-target;
    }
    // checking if we can half the target so 
    if(target%2==0){
        return 1 + brokenCalc(startValue,target/2);
        //ab baki 1/2 part ke liye recursion will take place
    }
    
    return 1 + brokenCalc(startValue,target+1);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int startValue,target;
    cin>>startValue>>target;
    cout<<brokenCalc(startValue,target)<<endl;
    }
    return 0;
}

