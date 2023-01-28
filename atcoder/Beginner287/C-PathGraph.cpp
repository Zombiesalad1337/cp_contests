#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    vector<bool> seen(n+1);
    
    while (m){
        int u, v;
        cin >> u >> v;
        m--;
        if (abs(u - v) > 1){
            cout << "No\n";
            return 0;
        }
        seen[min(u, v)] = true;
    }
    for (int i = 1; i < n; ++i){
        if (!seen[i]){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";

    return 0;
}
