#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  while (true) {
    string sen;
    getline(cin, sen);
    if (sen==".") break;
    stack <char>s;
    bool del = true;
    for (auto c: sen) {
      if (c == '[' || c == '(') s.push(c);
      else if (c == ']') {
        if (s.empty() || s.top() != '[') {
          del = false;
          break;
        } else s.pop();
      }
      else if (c == ')') {
        if (s.empty() || s.top() != '(') {
          del = false; 
          break;
        } else s.pop();
      }
    }
    if (!s.empty()) cout << "no\n";
    else {
      if (del) cout << "yes\n";
      else cout << "no\n";
    }
  }
}