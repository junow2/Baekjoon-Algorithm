#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int N, K, ans;
int A[12]; 

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> N >> K; 
  for (int i=0; i<N; i++) cin >> A[i];
  for (int i=N-1; i>=0; i--) {
    ans += K / A[i];
    K %= A[i]; 
  }
  cout << ans; 

}