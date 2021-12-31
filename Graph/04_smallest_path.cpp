#include <bits/stdc++.h>

using namespace std;

class Edge
{
public:
  int src;
  int nbr;
  int wt;

  Edge(int src, int nbr, int wt)
  {
    this->src = src;
    this->nbr = nbr;
    this->wt = wt;
  }
};

string spath = "";
int swt = INT_MAX;
void smallestPath(vector<Edge> graph[], int src, int dest, vector<bool> &visited, string psf, int wsf)
{
  if (src == dest)
  {
    if (wsf < swt)
    {
      swt = wsf;
      spath = psf;
    }
    return;
  }

  visited[src] = true;

  for (auto edge : graph[src])
  {
    if (visited[edge.nbr] == false)
    {
      smallestPath(graph, edge.nbr, dest, visited, psf + to_string(edge.nbr), wsf + edge.wt);
    }
  }

  visited[src] = false;
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

  int src = 0, dest = 6;

  smallestPath(graph, src, dest, visited, to_string(src), 0);
  cout << spath << "\t" << swt << endl;
}