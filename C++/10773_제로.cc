#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, T;
  stack <int>s;
  cin >> N;
  for (int i=0; i < N; i++) {
    string command; 
    cin >> command;
    if (command == "push") {
      cin >> T;
      s.push(T);
    } 
    else if (command == "pop") { 
      if (s.empty()) cout << "-1" << endl;
      else { 
        cout << s.top() << endl;
        s.pop();
      }
    }
    else if (command == "size") cout << s.size() << endl;
    else if (command == "empty") {
      if (s.empty()) cout << "1" << endl;
      else cout << "0" << endl;
    }
    else if (command == "top") {
      if (s.empty()) cout << "-1" << endl;
      else cout << s.top() << endl;
    }
  }
}