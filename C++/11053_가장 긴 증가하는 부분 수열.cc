#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

int N, mx, dp[1002], A[1002]; 

int main(void) {  
  ios::sync_with_stdio(false); cin.tie(NULL);
   
  cin >> N; 
  for (int i=0; i<N; i++) { 
    cin >> A[i]; 

    for (int j=0; j<i; j++)
      if (A[i] > A[j]) dp[i] = max(dp[i], dp[j]+1);    
  }

  // for (int i=0; i<N; i++) cout << dp[i] << " "; cout << endl;

  for (int i=0; i<N; i++) 
    if (dp[i] > mx) mx = dp[i];
    
    cout << mx+1;
}