#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

int N;
ll dp[92] = {0, 1, 1}; 

int main(void) {  
  ios::sync_with_stdio(false); cin.tie(NULL);
   
  cin >> N; 

  for (int i=3; i<=N; i++) 
    dp[i] = dp[i-2] + dp[i-1]; 

  cout << dp[N]; 
}
