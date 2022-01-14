// kruskal algorithm
#include<bits/stdc++.h>
using namespace std;
struct node {
    int u;
    int v;
    int wt; 
    node(int first, int second, int weight) {
        u = first;
        v = second;
        wt = weight;
    }
};

bool comp(node a, node b) {
//array sorted according to the weight
    return a.wt < b.wt; 
}

int findPar(int u, vector<int> &parent) {
//to find parent node 
    if(u == parent[u]) return u; 
    return parent[u] = findPar(parent[u], parent); 
}

void unionn(int u, int v, vector<int> &parent, vector<int> &rank) {
//union of the nodes
    u = findPar(u, parent);
    v = findPar(v, parent);
    if(rank[u] < rank[v]) {//attach to that node who has higher rank to get parent
    	parent[u] = v;//v bada hai to u ka parent i.e parent[u] kon hoga ,it will be v 
    }
    else if(rank[v] < rank[u]) {
    	parent[v] = u; 
    }
    else {//when rank of v and u are same
    	parent[v] = u;
    	rank[u]++; 
    }
}
int main(){
	int N,m;
	cin >> N >> m;
	vector<node> edges; 
	for(int i = 0; i<m; i++) {
	    int u, v, wt;
	    cin >> u >> v >> wt; 
	    edges.push_back(node(u, v, wt)); 
	}
	sort(edges.begin(), edges.end(), comp); 
	
	vector<int> parent(N);
	for(int i = 0;i<N;i++) 
	    parent[i] = i; //initially every node will be its own parent only 
	vector<int> rank(N, 0); //initialize rank vector as 0
	
	int cost = 0;
	vector<pair<int,int>> mst; 
            // linearly iterating over the edges
	for(auto it : edges) {
            // checking if the 2 node of the edge belong to same component or not
	    if (findPar(it.v, parent) != findPar(it.u, parent)) {
	        cost += it.wt; 
	        mst.push_back({it.u, it.v}); 
	        unionn(it.u, it.v, parent, rank); 
	    }
	}
	cout << cost << endl;
	for(auto it : mst) cout << it.first << " - " << it.second << endl; 
	return 0;
}