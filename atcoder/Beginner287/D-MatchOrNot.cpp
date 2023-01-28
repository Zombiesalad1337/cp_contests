#include <bits/stdc++.h>
using namespace std;

int main(){

    string s, t;
    cin >> s >> t;

    int backFail = -1;
    
    int j = s.size() - 1;
    for (int i = t.size() - 1; i >= 0; --i){
        if (s[j] != '?' && t[i] != '?' && s[j] != t[i]){
            backFail = i;
            break;
        }
        j--;
    }
    if (backFail >= 0){
        for (int i = 0; i <= backFail; ++i){
            cout << "No\n";
        }
        //fs till backFail
        bool safe = true;
        for (int i = 0; i < backFail; ++i){
            if (s[i] == '?' || t[i] == '?' || s[i] == t[i]){
                continue;
            }
            else{
                safe = false;
                break;
            }
        }

        for (int i = backFail; i < t.size(); ++i){
            if (!safe){
                cout << "No\n";
            }
            else if (s[i] == '?' || t[i] == '?' || s[i] == t[i]){
                cout << "Yes\n";
            }
            else{
                cout << "No\n";
                safe = false;
            }
        }
        
    }
    if (backFail == -1){
        cout << "Yes\n";
        bool safe = true;
        for (int i = 0; i < t.size(); ++i){
            if (!safe){
                cout << "No\n";
            }
            else if (s[i] == '?' || t[i] == '?' || s[i] == t[i]){
                cout << "Yes\n";
            }
            else{
                cout << "No\n";
                safe = false;
            }
        }
    }

    return 0;
}
