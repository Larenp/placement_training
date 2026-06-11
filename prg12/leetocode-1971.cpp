class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        vector<vector<int>> adj(n);

        for (int i = 0; i < edges.size(); i++) {
            for (int j = 0; j < edges[i].size(); j++) {
                if (j == 0)
                    adj[edges[i][0]].push_back(edges[i][1]);
                else
                    adj[edges[i][1]].push_back(edges[i][0]);
            }
        }

        vector<bool> visited(n, false);

        queue<int> q;
        q.push(source);
        visited[source] = true;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            if (node == destination)
                return true;

            for (int i = 0; i < adj[node].size(); i++) {
                int nei = adj[node][i];

                if (!visited[nei]) {
                    visited[nei] = true;
                    q.push(nei);
                }
            }
        }

        return false;
    }
};