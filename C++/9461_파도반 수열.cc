#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

int N, T;
ll dp[102] = {0, 1, 1, 1};

void F() {

  for (ll i=3; i<101; i++) 
    dp[i] = dp[i-3] + dp[i-2]; 
}

int main(void) {  
  ios::sync_with_stdio(false); cin.tie(NULL);

  F(); 

  cin >> T; 
  for (int i=0; i<T; i++) {

    cin >> N; cout << dp[N] << endl;
  }
}
