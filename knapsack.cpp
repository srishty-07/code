#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int knapsack(int n,int w[],int value[],int W){
    if(n==0 || W==0){
        return 0;
    }
    if(w[n-1]>W){
        return knapsack(n-1,w,value,W);
    }
    return max(knapsack(n-1,w,value,W-w[n-1])+value[n-1] , knapsack(n-1,w,value,W));
}

int main()
{
    int w[] = {10,20,30};
    int value[] = {100,50,150};
    int W = 50;
    cout<<knapsack(3,w,value,W);
    return 0;
}
