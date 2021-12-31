#include <bits/stdc++.h>

using namespace std;

class Edge
{
public:
  int src, nbr, wt;

  Edge(int src, int nbr, int wt)
  {
    this->src = src;
    this->nbr = nbr;
    this->wt = wt;
  }
};

void generateComps(vector<Edge> graph[], vector<bool> &visited, vector<int> &comp, int src)
{
  visited[src] = true;
  comp.push_back(src);
  for (auto edge : graph[src])
  {
    if (visited[edge.nbr] == false)
      generateComps(graph, visited, comp, edge.nbr);
  }
}

vector<vector<int>> getComponents(vector<Edge> graph[], vector<bool> &visited, int V)
{
  vector<vector<int>> comps;
  for (int i = 0; i < V; i++)
  {
    if (visited[i] == false)
    {
      vector<int> comp;
      generateComps(graph, visited, comp, i);
      comps.push_back(comp);
    }
  }

  return comps;
}

int main()
{
  int V = 7;
  vector<Edge> graph[V];

  graph[0].push_back(Edge(0, 1, 10));
  graph[1].push_back(Edge(1, 0, 10));

  graph[2].push_back(Edge(2, 3, 10));
  graph[3].push_back(Edge(3, 2, 10));

  graph[4].push_back(Edge(4, 5, 10));
  graph[4].push_back(Edge(4, 6, 10));

  graph[5].push_back(Edge(5, 4, 10));
  graph[5].push_back(Edge(5, 6, 10));

  graph[6].push_back(Edge(6, 4, 10));
  graph[6].push_back(Edge(6, 5, 10));

  vector<bool> visited(V, false);

  vector<vector<int>> comps = getComponents(graph, visited, V);

  for (vector<int> v : comps)
  {
    for (int el : v)
      cout << el << " ";
    cout << endl;
  }
}