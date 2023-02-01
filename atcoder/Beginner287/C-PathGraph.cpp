#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, m;
    cin >> n >> m;


    vector<vector<int>> graph(n + 1, vector<int>(n+1));
    vector<int> edges(n + 1, 0);
    while (m){
        int u, v;
        cin >> u >> v;
        m--;
        edges[u]++;
        edges[v]++;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    if (m != n - 1){
        cout << "No\n";
        return 0;
    }
    for (int i = 1; i < edges.size(); ++i){
        if (edges[i] == 0 || edges[i] > 2){
            cout << "No\n";
            return 0;
        } 
    }
    vector<bool> reach(n+1);
    
    queue<int> q;
    q.push(1);
    while (!q.empty()){
        int currSize = q.size();
        for (int i = 0; i < currSize; ++i){
            int front = q.front();
            q.pop();
            reach[front] = true;
            for (int j = 1; j < n + 1; ++j){
                if (graph[front][j] == 1 && !reach[j]){
                    q.push(j);
                }
            }
        }
    }

    for (int i = 1; i < n + 1; ++i){
        if (!reach[i]){
            cout << "No\n";
            return 0;
        }
    }


    cout << "Yes\n";
    return 0;
}
