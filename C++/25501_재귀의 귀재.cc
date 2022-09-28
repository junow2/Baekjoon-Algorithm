#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'

string s;

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int N; cin >> N; 
  for (int i=0; i<N; i++) {
    cin >> s; 

    int cnt = 0; bool flag = true; 
    int l = 0; int e = s.size()-1;
    while (l <= e) {
      cnt++;

      if (s[l] != s[e]) { flag = false; break; }
      
      l++; e--;
    }

    if (flag && s.size() % 2 == 0) cnt++; 
    cout << (flag ? 1 : 0) << " " << cnt << endl;  
  }
}