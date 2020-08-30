#include<bits/stdc++.h>
using namespace std;

class Graph{
	int V;
public:
	list<int> *l;

	Graph(int v){
		V = v;
		l = new list<int>[V];
	}

	void addEdge(int u,int v,bool bidir=true){
		l[u].push_back(v);
		if(bidir){
			l[v].push_back(u);
		}
	}
	//Iterate using a loop - Breadth First Search
	void bfs(int s){
		queue<int> q;
		q.push(s);


		int *dist = new int[V];
		int *parent = new int[V];
		//Init all nodes with inf dist
		for(int i=0;i<V;i++){
			dist[i] = INT_MAX;
			parent[i] = -1;
		}
		dist[s] = 0;
		parent[s] = s;

		while(!q.empty()){
			int node  = q.front();
			q.pop();

			for(auto child:l[node]){
				if(dist[child]==INT_MAX){
					q.push(child);
					dist[child] = dist[node] + 1;
					parent[child] = node;
				}	
			}
		}

		//Print the dist of all nodes
		for(int i=0;i<V;i++){
			cout<<"dist["<<i<<"]"<<"="<<dist[i]<<endl;
			cout<<"parent["<<i<<"]"<<"="<<parent[i]<<endl;
		}

		int dest=36;
		int src = 0;
		while(dest!=src){
			cout<<dest<<"<---";
			dest = parent[dest];
		}
		cout<<src;


	}
};

int main(){


    int board[50] = {0};
    board[2]= 13;
    board[5] = 2;
    board[9] = 18;
    board[18] = 11;
    board[17] = -13;
    board[20] = -14;
    board[24] = -8;
    board[25] = 10;
    board[32] = -2;
    board[34] = -22;


	Graph g(37);
	for(int i=0;i<36;i++){
		for(int dice=1;dice<=6;dice++){
			int j = i + dice + board[i+dice];
			if(j<=36){
				g.addEdge(i,j,false);
			}
		}
	}
	g.bfs(0);

	return 0;
}