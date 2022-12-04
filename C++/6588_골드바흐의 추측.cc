#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

int N, mx, a, b, tmp;
int prime[MAX]; 
vector <int> v /*, tmp(2)*/; 

void P() {

  for (int i = 2; i <= MAX; i++) prime[i] = i; 
  for (int i = 2; i <= sqrt(MAX); i++) {
    if (prime[i] == 0) continue;
    for (int j = i * i;  j <= MAX; j += i) prime[j] = 0; 
  }

  for (int i = 2; i <= MAX; i++)
    if (prime[i] != 0) v.push_back(prime[i]); 
}

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  P(); 

  while (true) {
    cin >> N; 
    if (!N) break; 

    // vector <int> perm(v.size()); 
    // fill(perm.begin(), perm.end(), 0); 
    // for (int i = 0; i < 2; i++) perm[i] = 1;

    // for (auto c: perm) cout << c << ' '; cout << endl;
    // for (auto c: v) cout << c << ' '; cout << endl;

    for (int i = 0; prime[i] < N; i++) {
      tmp = N - prime[i]; 
      if (prime[tmp]) { cout << N << " = " << prime[i] << " + " << tmp << endl; break; }
    }

    // do {
    //   // for (int i = 0; i < perm.size(); ++i)
    //   //   cout << perm[i] << " "; cout << endl;

    //   tmp.clear();

    //   for (int i = 0; i < perm.size(); ++i) 
    //     if (perm[i]) tmp.push_back(v[i]);

    //   if (tmp[0] + tmp[1] == N)   
    //     if (tmp[1] - tmp[0] > mx) 
    //       mx = tmp[1] - tmp[0], a = tmp[0], b = tmp[1]; 

    // } while (prev_permutation(perm.begin(), perm.end()));

    // cout << N << " = " << a << " + " << b << endl;
  }
} 