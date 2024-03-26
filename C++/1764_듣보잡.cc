#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

int n, m;
unordered_set<string> p;  
vector<string> v; 
string s;

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> n >> m;

  for (int i=1; i<=n; i++) { cin >> s; p.insert(s); }
  for (int i=1; i<=m; i++) {
    cin >> s; 
    if (p.find(s) != p.end()) { v.push_back(s); }
  }
  sort(v.begin(), v.end());

  cout << v.size() << endl; 
  for (string e: v) cout << e << endl;
  
}