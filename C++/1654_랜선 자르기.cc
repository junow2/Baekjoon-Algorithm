#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'

int K, N; 
int A[10002]; 

bool solve(ll x) {
  ll cur = 0;
  for (int i=0; i<K; i++ ) cur += A[i] / x;

  return cur >= N;  
}

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> K >> N; 
  for (int i=0; i<K; i++) cin >> A[i]; 

  ll st = 1, en = pow(2, 31) -1;
  while (st < en) {
    ll mid = (st+en+1) / 2; 
    if (solve(mid)) st = mid; 
    else en = mid - 1; 
  } 
  cout << st; 
}