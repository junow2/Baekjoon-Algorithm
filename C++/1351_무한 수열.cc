#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

ll N, P, Q;
unordered_map<ll, ll> st; 

ll F(ll n) {

  if (n == 0) return 1; 

  if (st.find(n) != st.end()) return st[n]; 

  return st[n] = F(n/P) + F(n/Q); 
}

int main(void) {  
  ios::sync_with_stdio(false); cin.tie(NULL);
   
  cin >> N >> P >> Q; 

  cout << F(N); 

}