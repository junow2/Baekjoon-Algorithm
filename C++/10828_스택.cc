#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int main(void) {
  int K, sum = 0;
  cin >> K;
  stack <int>s;

  while (K--) {
    int n;
    cin >> n;

    if (n == 0) s.pop();
    else s.push(n);
  }
  
  while (!s.empty()) {
    sum += s.top();
    s.pop();
  }
  cout << sum;
}