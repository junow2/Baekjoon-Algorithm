#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;

int N, M, inp;
bool Arr[20000002];

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N;
  for (int i=0; i<N; i++) { 
    cin >> inp;  
    inp += 10000000; Arr[inp] = 1; 
  } 

  cin >> M;
  for (int i=0; i<M; i++) {
    cin >> inp;
    inp += 10000000; cout << Arr[inp] << ' '; 
  }

}