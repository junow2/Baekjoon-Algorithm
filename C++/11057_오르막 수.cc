#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int N;
int dp[1002][12];  

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> N; 

  int num=1; 
  for (int i=0; i<10; i++) dp[1][i] = num++; 

  for (int i=2; i<=N; i++) 
    for (int j=0; j<10; j++) 
      dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % 10007; 

  // for (int i=1; i<=N; i++) {
  //   for (int j=0; j<10; j++) cout << dp[i][j] << " ";
  //   cout << endl; 
  // }
  cout << dp[N][9] % 10007;
  
}