#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
 
  stack<int> s;
  while(1) {
    string num, ans;
    int inp; cin >> inp;
    if (inp == 0) break;
    
    num = to_string(inp);  
    for (char c: num) {
      s.push((int) c);
    }
    while (!s.empty()) {
      ans += s.top();
      s.pop();
    }
    if (num == ans) cout << "yes" << endl;
    else cout << "no" << endl;
  }
} 