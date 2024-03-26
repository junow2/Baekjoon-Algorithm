#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int T, n, mx; 
ll dp[1000002];

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> T; 
  int A[T]; 
  for (int i=0; i<T; i++) {
    cin >> A[i]; 
    if (A[i] > mx) mx = A[i]; 
  }

  dp[1] = 1; dp[2] = 2; dp[3] = 4; 
  for (int i=4; i<=mx; i++) {
    dp[i] = (dp[i-3] + dp[i-2] + dp[i-1]) % 1000000009; 
    // dp[i] %= 1000000009;
  }

  for (int i=0; i<T; i++)
    cout << dp[A[i]] % 1000000009 << endl;
}