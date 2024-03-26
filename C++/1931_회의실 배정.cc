#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000
const int INF = 10002; 

int N, a, b, ans; 
vector <pair<int, int>> v; 

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {

  if (a.second == b.second) 
    return a.first < b.first;

  return a.second < b.second;
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N; 
  for (int i=1; i<=N; i++) { cin >> a >> b; v.push_back({a, b}); }

  sort(v.begin(), v.end(), cmp);
  // for (auto i: v) cout << i.first << " " << i.second << endl;

  int cur = 0;

  for (int i=0; i<N; i++) 
    if (v[i].first >= cur) { ans++; cur = v[i].second; }   
  
  cout << ans; 
}