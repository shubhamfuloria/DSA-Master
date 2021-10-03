#include<bits/stdc++.h>

using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    vector<int>bfs;
    vector<int> visited(V + 1, 0);

    //for disconnected graphs

    for(int i = 0; i < V; i++)
    {
        if(visited[i] == 0)
        {
            queue<int> q;
            q.push(i);
            visited[i] = 1;

            while(!q.empty()) 
            {
                int node = q.front();
                q.pop();
                bfs.push_back(node);

                for(auto it : adj[node])
                {
                    if(!visited[it])
                    {
                        q.push(it);
                        visited[it] = 1;
                    }
                }
            }
        }
    }

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
    unordered_map<int, int> umap;

    umap.insert({20, 30});
    umap.insert({10, 40});

    for(auto it = umap.begin(); it != umap.end(); it++)
        cout << it->first << " " << it->second << endl;


}