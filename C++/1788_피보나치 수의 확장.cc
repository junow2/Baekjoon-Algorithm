#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000

int N;
int dp[2000002]; 

int f(int x) {

  if (x == 1000000) return dp[1000000]; 
  if (x == 1000001) return dp[1000001];

  if (dp[x] != 0) return dp[x]; 

  if (x < 1000000)
    return dp[x] = (f(x+2) - f(x+1)) % 1000000000; 
    // return dp[x+1000000] = dp[x+1000002] - dp[x+1000001]; 
  if (x > 1000000) 
    return dp[x] = (f(x-1) + f(x-2)) % 1000000000; 
    // return dp[x+1000000] = dp[x+999999] + dp[x+999998]; 
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  
  dp[1000000] = 0; dp[1000001] = 1; 

  cin >> N; 
  int ans = f(N+1000000) % 1000000000;  

  if (ans < 0) 
    cout << -1 << endl << abs(ans);
  else if (!ans) cout << 0 << endl << ans;
  else 
    cout << 1 << endl << ans; 
    
}