#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  stack <pair<int, int>>s; // first = height, second = index 

  int N, ans = 0; cin >> N;
  
  for (int i=0; i < N; i++) {
    int L, R, h, w = 0, idx = i; cin >> h;
    while (!s.empty() && h < s.top().first) {
      L = s.top().second;
      R = i-1;
      w = (R-L+1) * s.top().first;
      idx = s.top().second; 
      
      if (w > ans) ans = w;
      s.pop(); 
    }
    s.push({h, idx});
  }
  while (!s.empty()) {
    int height = s.top().first; 
    int length = N - s.top().second;
    int width = length * height;
    if (width > ans) ans = width;
    s.pop();
  }
  cout << ans << endl;
}
