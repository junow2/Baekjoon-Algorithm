#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

string s, a;
int x, ans; 

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> s; 
  x = s.size(); 

  for (int i=1; i<=x; i++) {
    unordered_set<string> li; 

    for (int j=0; j<x; j++) {
      a = s.substr(j, i);

      if (a.size() == i) li.insert(a); 
    }
    ans += li.size(); 
  }

  cout << ans;
}