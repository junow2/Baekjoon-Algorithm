#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

char arr[27][27];
string s;

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  for (int i=0; i<27; i++)
    for (int j=0; j<27; j++) arr[i][j] = '?';

  for (int i=0; i<5; i++) {
    cin >> s; 

    for (int j=0; j<s.size(); j++) arr[i][j] = s[j]; 
  }

  for (int i=0; i<27; i++) {
    for (int j=0; j<27; j++) {

      if (arr[j][i] == '?') continue;
      cout << arr[j][i];
    }
  }
}