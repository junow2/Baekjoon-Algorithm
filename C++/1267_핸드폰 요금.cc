#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int n, C;
int Y = 0, M = 0;

int main(void) {

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> C;
    Y += (( C / 30) + 1) * 10;
    M += (( C / 60) + 1) * 15;
  }

  if (Y < M) {
    cout << "Y" << " " << Y;
  }
  else if (Y > M) {
    cout << "M" << " " << M;
  }
  else if (Y == M) {
    cout << "Y" << " " << "M" << " " << Y;
  }
}