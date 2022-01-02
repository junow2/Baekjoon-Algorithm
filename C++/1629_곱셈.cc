#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

int func(ll a, ll b, ll c) {

  if (b==1) return a % c; 

  ll val = func(a, b/2, c); 
  val = val * val % c; 
  if (b%2 == 0) return val; 

  return val * a % c; 
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
 
  ll a, b, c; cin >> a >> b >> c;
  cout << func(a, b, c);
} 
