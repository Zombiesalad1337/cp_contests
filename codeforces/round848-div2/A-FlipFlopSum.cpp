#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);


    int t;
    cin >> t;

    while (t){
        t--;
        int n;
        cin >> n;

        int sum = 0;
        int a = 0;
        int b = 0;
        bool bothNeg = false;
        bool oneNeg = false;
        for (int i = 0; i < n; ++i){
            cin >> b; 
            if (a == -1 && b == -1)
                bothNeg = true;
            else if (a == -1 || b == -1){
                oneNeg = true;
            }
            sum += b;
            a = b;
        }

        if (bothNeg){
            sum += 4;
        }
        else if (oneNeg){
        }
        else{
            sum -= 4;
        }
        cout << sum << "\n";
    }


    return 0;
}
