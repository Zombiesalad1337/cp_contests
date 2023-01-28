#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, bool> seen;

    int n, m;
    cin >> n >> m;
    vector<string> S;
    while (n){
        string s;
        cin >> s;
        S.push_back(s);
        n--;
    }
    while (m){
        string t;
        cin >> t;
        seen[t] = true;
        m--;
    }
    int count = 0;
    for (string s : S){
        if (seen[s.substr(3)]){
            count++;
        }
    }
    cout <<   count << endl;
    return 0;
}
