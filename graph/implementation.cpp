#include <bits/stdc++.h>

using namespace std;


void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs(int node, vector<int> &visited, vector<int> adj[], vector<int> &storeDfs)
{
    storeDfs.push_back(node);
    visited[node] = 1;
    for (auto i : adj[node])
    {
        if (!visited[i])
            dfs(i, visited, adj, storeDfs);
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    vector<int> storeDfs;
    vector<int> visited(V, 0);

    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            dfs(i, visited, adj, storeDfs);
        }
    }
    return storeDfs;
}

void printGraph(vector<int> adj[], int V)
{
    for(int v = 0; v < V; v++)
    {
        cout << "\n Adjancency list of vertex " << v << "\n head " ;
        for(auto x : adj[v])
            cout << "-> " << x;
        cout << endl;
    }
}
vector<int> bfs(int V, vector<int> adj[])
{
    vector<int> visited(V, 0);
    vector<int> bfs;
    //for connected graphs

    queue<int> q;
    q.push(0);
    visited[0] = 1;

    while(q.empty() == false)
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it : adj[node])
        {
            if(visited[it] == 0)
            {
                q.push(it);
                visited[it] = 1;
            }
        }
    }


    return bfs;
}
int main()
{
    int V = 5;
    vector<int> adj[V];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    vector<int> v = bfs(5, adj);

    for(auto i : v)
        cout << i << " ";
    cout << endl;

    v = dfsOfGraph(5, adj);

    for (auto i : v)
        cout << i << " ";
    cout << endl;
}