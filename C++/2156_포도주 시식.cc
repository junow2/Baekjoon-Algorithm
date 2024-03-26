#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int n, mx; 
int dp[10002], A[10002];

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> n;
  for (int i=1; i<=n; i++) cin >> A[i]; 
  
  dp[1] = A[1]; 
  dp[2] = dp[1] + A[2]; 

  for (int i=3; i<=n; i++) 
    dp[i] = max({dp[i-3] + A[i-1] + A[i], dp[i-2] + A[i], dp[i-1]}); 
  
  cout << dp[n]; 
}
