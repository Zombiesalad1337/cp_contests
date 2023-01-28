#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int countFor = 0;
  int countAgainst = 0;
  while (n){
    string s;
    cin >> s;
    if (s[0] == 'F')
      countFor++;
    else countAgainst++;
    n--;
  }
  if (countFor > countAgainst){
    cout << "Yes\n";
  }
  else {
  cout << "No\n";
  }
  return 0;
}
