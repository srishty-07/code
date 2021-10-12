DFS
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int n = 1e5+2;
bool vis[n];//visited array
vector<int> adj[n];//adjacency list

void dfs(int node){
    vis[node]=1;
    vector<int> :: iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++){
        if(vis[*it]);
        else{
            //call dfs recursively
            dfs(*it);
        }
    }
    // postorder
    cout<<node<<" ";
}
int main()
{
    for(int i=0;i<n;i++){
        vis[i]=0;//initilaising visited array to 0
    }
    
    int n,m;
    cin>>n>>m;
    
    //to input edges 
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    dfs(1);
    return 0;
}
