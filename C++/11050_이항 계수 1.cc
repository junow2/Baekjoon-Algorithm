#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int facto(int num) {
  if (num <= 1) return 1; 

  return facto(num-1) * num; 
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  
  int N, K; cin >> N >> K; 
  cout << facto(N) / (facto(K) * facto(N-K));
} 
