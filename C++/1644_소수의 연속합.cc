#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 4000002

int N, sum, res; 
int prime[MAX];
vector <int> v; 

void P() { 

  for (int i = 2; i <= MAX; i++) prime[i] = i;

  for (int i = 2; i <= sqrt(MAX); i++) {
    if (prime[i] == 0) continue;

    for (int j = i * i;  j <= MAX; j += i) prime[j] = 0; 
  }

  for (int i = 2; i <= N; i++) 
    if (prime[i] != 0) { sum += i; v.push_back(sum); } 
}

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> N; P();  

  // for (auto c: v) cout << c << ' '; cout << endl;

  int lt = 0 , rt = 0, tmp = 0; 

  while (lt <= rt && rt < v.size()) {

    if (v[rt] - v[lt] > N) lt++;
    if (v[rt] - v[lt] < N) rt++; 
    if (v[rt] - v[lt] == N) { res++; rt++; } 
  }

  for (auto c: v) 
    if (c ==  N) res++; 

  cout << res; 
} 