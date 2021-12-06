#include <bits/stdc++.h>

using namespace std;
class Edge
{
public:
  int src;
  int dest;
  int wt;

  Edge(int src, int dest, int wt)
  {
    this->src = src;
    this->dest = dest;
    this->wt = wt;
  }
};

bool hasPath(vector<Edge> graph[], int src, int dest, vector<bool> visited)
{
  if (src == dest)
    return true;

  visited[src] = true;

  for (auto edge : graph[src])
  {
    if (visited[edge.dest] == false)
    {
      bool nbrHasPath = hasPath(graph, edge.dest, dest, visited);
      if (nbrHasPath == true)
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
  graph[0].push_back(Edge(0, 3, 10));

  graph[1].push_back(Edge(1, 0, 10));
  graph[1].push_back(Edge(1, 2, 10));

  graph[2].push_back(Edge(2, 1, 10));
  graph[2].push_back(Edge(2, 3, 10));

  graph[3].push_back(Edge(3, 0, 10));
  graph[3].push_back(Edge(3, 2, 10));
  graph[3].push_back(Edge(3, 4, 10));

  graph[4].push_back(Edge(4, 3, 10));
  graph[4].push_back(Edge(4, 5, 10));
  graph[4].push_back(Edge(4, 6, 10));

  graph[5].push_back(Edge(5, 4, 10));
  graph[5].push_back(Edge(4, 6, 10));

  graph[6].push_back(Edge(6, 4, 8));
  graph[6].push_back(Edge(6, 5, 10));

  vector<bool> visited(V, false);

  if (hasPath(graph, 0, 7, visited))
    cout << "Yes there is a path :)" << endl;

  else
    cout << "Oops there isn't a path :(" << endl;
}