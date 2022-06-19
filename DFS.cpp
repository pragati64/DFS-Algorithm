
#include <bits/stdc++.h>
using namespace std;


class Graph {
public:
	map<int, bool> visited;
	map<int, list<int> > adj;

	
	void addEdge(int x, int y);


	void DFS(int x);
};

void Graph::addEdge(int x, int y)
{
	adj[x].push_back(y); 
}

void Graph::DFS(int x)
{
	
	visited[x] = true;
	cout << x << " ";


	list<int>::iterator i;
	for (i = adj[x].begin(); i != adj[x].end(); ++i)
		if (!visited[*i])
			DFS(*i);
}


int main()
{
	
	Graph g;
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	cout << "Following is Depth First Traversal"
			" (starting from vertex 2) \n";
	g.DFS(2);

	return 0;
}


