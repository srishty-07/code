#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int N = 50;
int val[N],wt[N];

int dp[N][N];
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int knapsack(int n,int w){
    // base case
    if(w<=0){
        return 0;
    }
    if(n<=0){
        return 0;
    }
    // 
    if(dp[n][w]!=-1){
        return dp[n][w];
    }
    //wt of current item is greater than sack weight then we will not consider that item 
    if(wt[n-1]>w){
        dp[n][w] = knapsack(n-1,w);//not considering
    }
    else {
        // max(when we will not take , when we will take)
        // c[i,w]=max[c[i-1,w , c[i-1,w-wti] + Vi]
        dp[n][w] = max(knapsack(n-1,w), knapsack(n-1 , w-wt[n-1]) + val[n-1]);
    }
    
    return dp[n][w];
}
int main()
{
    cout<<"Srishty bedi-A2305219783"<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            dp[i][j]= -1;
        }
    }    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    int w;
    cin>>w;
    cout<<knapsack(n,w)<<endl;
    return 0;
}
