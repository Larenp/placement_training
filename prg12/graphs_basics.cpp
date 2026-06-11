/*
types of graphs
1 directed
2 undirected
3 weighted
4 cyclic/acyclic

representation
1 adj matrix
2 adj list

traversal
1 bfs
2 dfs

eg:

  0 1 2 3
0 0 0 0 0
1     1 0
2     0
3

adj list

0->1 3
1->0 2
2->1 3
3->0 2
*/

#include <bits/stdc++.h>
using namespace std;

class graph
{
    int v;
    vector<vector<int>> adj_list;

public:
    graph(int vertex) : v(vertex)
    {
        adj_list.resize(v);
    }

    void addEdge(int node1, int node2, bool directed = false)
    {
        adj_list[node1].push_back(node2);

        if (!directed)
        {
            adj_list[node2].push_back(node1);
        }
    }

    void addVertex()
    {
        v++;
        adj_list.push_back({});
    }

    void bfs(int startNode, vector<bool>& visited)
    {
        queue<int> q;

        visited[startNode] = true;
        q.push(startNode);

        while (!q.empty())
        {
            int node = q.front();
            q.pop();

            cout << node << " ";

            for (int neighbour : adj_list[node])
            {
                if (!visited[neighbour])
                {
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }
    }
    void dfs(int startNode,vector<bool>&visited){
        visited[startNode]=true;
        cout<<startNode;
        for(auto it:adj_list[startNode]){
                dfs(it,adj_list,visites
                )
        }
    }
};