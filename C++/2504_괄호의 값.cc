#include <bits/stdc++.h>
using namespace std;
int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int cnt = 1, res = 0;
  string s; cin >> s;
  stack <int> st;
  bool check = true; 

  for (int i=0; i < s.length(); i++) {
    if (s[i] == '(') {
      st.push(s[i]);
      cnt *= 2;
    }
    else if (s[i] == '[') {
      st.push(s[i]);
      cnt *= 3;
    }
    else if (s[i] == ')') {
      if (st.empty() || st.top() != '(') {
        check = false;
        break;
      }

      if (s[i-1] == '(') res += cnt;  
      st.pop();
      cnt /= 2;
    }
    else if (s[i] == ']') {
      if (st.empty() || st.top() != '[') {
        check = false;
        break;
      }

      if (s[i-1] == '[') res += cnt;
      st.pop();
      cnt /= 3;
    }
  }
  if (!st.empty() || !check) cout << 0;
  else cout << res;
}