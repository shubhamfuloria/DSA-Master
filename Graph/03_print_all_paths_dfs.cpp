#include <bits/stdc++.h>

using namespace std;

class Edge
{
public:
  int src, dest, wt;

  Edge(int src, int dest, int wt)
  {
    this->src = src;
    this->dest = dest;
    this->wt = wt;
  }
};

void printAllPaths(vector<Edge> graph[], int src, int dest, vector<bool> visited, string psf)
{
  if (src == dest)
  {
    cout << psf << endl;
    return;
  }

  visited[src] = true;

  for (auto edge : graph[src])
  {
    if (visited[edge.dest] == false)
    {
      printAllPaths(graph, edge.dest, dest, visited, psf + to_string(edge.dest));
    }
  }
  visited[src] = false;
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

  printAllPaths(graph, 0, 6, visited, "0");
}