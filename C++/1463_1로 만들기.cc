#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'

int dp[1000002];

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int x; cin >> x; 
  dp[1] = 0; 
  for (int i=2; i <= x; i++) {
    dp[i] = dp[i-1] + 1; 
    if (i%3 == 0) dp[i] = min(dp[i], dp[i/3]+1);
    if (i%2 == 0) dp[i] = min(dp[i], dp[i/2]+1);
  }
  cout << dp[x];
}