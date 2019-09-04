#include <iostream>
#include <bits/stdc++.h>
#include <list>
using namespace std;

class Graph {
	int V;
	list<int> *adj;
	bool isCyclicUtil(int v,int *visited,int *recstack);
	public :
		Graph(int V);
		void addEdge(int a,int b);
		bool isCyclic();
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int a,int b)
{
	adj[a].push_back(b);
}

bool Graph::isCyclicUtil(int v,int *visited,int *recstack)
{
	if(visited[v] == false)
	{
		visited[v] = recstack[v] = true;
		for(auto it : adj[v])
		{ 
		   if(!visited[it] && isCyclic(it,visited,recstack))	
		     return true;
		   else if(recstack[i])
		     return true;  
		}
	}
	visited[v] = false;
	return false;
}
bool Graph::isCyclic()
{
	bool *visited = new bool[V];
	bool *recstack = new bool[V];
	for(int i=0;i<V;i++)
    {
    	visited[i] = recstack[i] = false;
	}
	for(int i=0;i<V;i++)
	{
		if(isCycliUtil(i,visited,recstack))
		  return true;
	}
	return false;
}
int main()
{
	Graph g(4);
	g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
  
    if(g.isCyclic()) 
        cout << "Graph contains cycle"; 
    else
        cout << "Graph doesn't contain cycle"; 
    return 0; 
	
	
}
