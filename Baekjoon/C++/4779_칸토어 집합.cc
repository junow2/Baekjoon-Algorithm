#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000
const int INF = 10002; 

int N; 

void f(int x) {
  
  if (x==0) { cout << '-'; return; }
  f(x-1); 
  for (int i=0; i<pow(3, x-1); i++) cout << ' ';
  f(x-1);
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  while (cin >> N) {
    
    f(N); cout << endl;
  }
}