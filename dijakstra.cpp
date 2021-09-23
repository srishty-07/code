// dijkstra algorithm - find shortest path taking any vertex as a source vertex
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int inf = 1e7;
int main()
{
    int n,m;
    // n = no of vertices
    // m = no of edges
    cin>>n>>m;
    vector<int> dist(n+1,inf); //initislaising the distance[dist] vector as infinity
    // weighted graph
    vector<vector<pair<int,int>>> graph(n+1); //pair bcoz we have to insert weight also
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
        
    }
    int source;
    cin>>source;
    dist[source] = 0;//distance value for the src vertex
    set<pair<int,int>> s;
    
    s.insert({0,source});
    
    while(!s.empty()){
        auto x = *(s.begin());
        s.erase(x);
        for(auto it : graph[x.second]){
            // it.first is the node v vali and it.second is the weight
            //if this node dist change by taking x then we will update that 
            if(dist[it.first] > dist[x.second] + it.second){
                //x.second - to get the neighbours then updating the neighbour si.e miinimum one
                s.erase({dist[it.first],it.first});
                // now creating updtaed distance 
                dist[it.first] = dist[x.second] + it.second;
                // and putting it again in set
                s.insert({dist[it.first],it.first});
                // in order of weight and vertex {wt,vertex}
            }
        }
    }
    // printing the distance array
    for(int i=1;i<=n;i++){
        if(dist[i]<inf){
            cout<<dist[i]<<" ";
        }
        else{
            cout<<"-1"<<" ";
        }
    }
    return 0;
}
