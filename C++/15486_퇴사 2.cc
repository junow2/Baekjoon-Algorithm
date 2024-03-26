#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000

int dp[1500055];
int N, T, P;

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N;
  for (int i=1; i<=N; i++) {
    cin >> T >> P; 

    dp[i+T] = max(dp[i+T], dp[i] + P);  
    dp[i+1] = max(dp[i], dp[i+1]);
  }

  cout << dp[N+1] << endl; 
}