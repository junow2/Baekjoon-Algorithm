#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

int a1, a0, c, n;

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> a1 >> a0 >> c >> n; 

  if (a1*n + a0 <= c * n && a1 <= c) cout << 1;
  else cout << 0;
}