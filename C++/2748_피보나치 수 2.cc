#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000

int N; 
ll dp[92] = {0, 1, 1}; 

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N; 

  for (int i=2; i<=N; i++) 
    dp[i] = dp[i-1] + dp[i-2]; 
  
  cout << dp[N]; 
}