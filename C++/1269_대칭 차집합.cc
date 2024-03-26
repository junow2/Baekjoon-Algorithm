#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

int n, m, p;
unordered_set<int> s; 
vector<int> v; 


int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> n >> m;
  for (int i=0; i<n; i++) { cin >> p; s.insert(p); }
  for (int i=0; i<m; i++) {
    cin >> p; 
    if (s.find(p) != s.end()) s.erase(p); 
    else v.push_back(p); 
  }

  cout << s.size() + v.size();
}