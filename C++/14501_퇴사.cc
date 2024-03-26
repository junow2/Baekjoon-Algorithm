#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

int N, T, P, mx;
int dp[1002]; 

int main(void) {  
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> N; 
  for (int i=0; i<N; i++) {
    cin >> T >> P; 

    for (int j=0; j<=i; j++) dp[i+T] = max(dp[i+T], dp[j] + P);
    
    // for (int j=0; j<=N; j++) cout << dp[j] << " "; cout << endl;
  } 

  for (int i=0; i<=N; i++) mx = max(mx, dp[i]); 
  cout << mx; 
}
