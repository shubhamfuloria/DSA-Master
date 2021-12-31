#include <bits/stdc++.h>

using namespace std;

class Edge
{
public:
  int src, nbr, wt;

  Edge(int src, int dest, int wt)
  {
    this->src = src;
    this->nbr = dest;
    this->wt = wt;
  }
};

void printGraph(vector<Edge> graph[], int V)
{
  for (int i = 0; i < V; i++)
    for (auto el : graph[i])
      cout << el.src << " -> " << el.nbr << " @ " << el.wt << endl;
}

bool hasPath(vector<Edge> graph[], int src, int dest, vector<bool> visited)
{
  if (src == dest)
    return true;

  visited[src] = true;

  for (auto edge : graph[src])
  {
    if (visited[edge.nbr] == false)
    {
      bool nbrHasPath = hasPath(graph, edge.nbr, dest, visited);
      if (nbrHasPath)
        return true;
    }
  }

  return false;
}

int main()
{
  int V = 7;
  vector<Edge> graph[V];

  graph[0].push_back(Edge(0, 1, 10));
  graph[0].push_back(Edge(0, 3, 40));

  graph[1].push_back(Edge(1, 0, 10));
  graph[1].push_back(Edge(1, 2, 10));

  graph[2].push_back(Edge(2, 1, 10));
  graph[2].push_back(Edge(2, 3, 10));

  graph[3].push_back(Edge(3, 0, 40));
  graph[3].push_back(Edge(3, 2, 10));
  graph[3].push_back(Edge(3, 4, 2));

  graph[4].push_back(Edge(4, 5, 3));
  graph[4].push_back(Edge(4, 6, 8));

  graph[5].push_back(Edge(5, 4, 3));
  graph[5].push_back(Edge(5, 6, 3));

  graph[6].push_back(Edge(6, 4, 8));
  graph[6].push_back(Edge(6, 5, 3));

  vector<bool> visited(V, false);

  cout << hasPath(graph, 0, 6, visited) << endl;
}